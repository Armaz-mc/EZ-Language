#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <cctype>
#include <stack>

enum class TokenType
{
    NUMBER,
    STRING,
    BOOLEAN,
    OPERATOR,
    KEYWORD,
    IDENTIFIER,
    END_OF_LINE,
    ERROR,
    PUNCTUATION
};

struct Token
{
    TokenType type;
    std::string value;
};
class Lexer
{
public:
    Lexer(const std::string &input) : input(input), position(0), errorReported(false) {}

    Token getNextToken()
    {
        if (errorReported)
        {
            return {TokenType::END_OF_LINE, ""};
        }

        skipWhitespaceAndComments();

        if (position >= input.size())
        {
            if (!punctuationStack.empty())
            {
                errorReported = true;
                return {TokenType::ERROR, "Unclosed punctuation: " + std::string(1, punctuationStack.top())};
            }
            return {TokenType::END_OF_LINE, ""};
        }

        if (std::isdigit(input[position]) || (input[position] == '-' && position + 1 < input.size() && std::isdigit(input[position + 1])))
        {
            return number();
        }

        if (input[position] == '"')
        {
            return string();
        }

        if (std::isalpha(input[position]) || input[position] == '_')
        {
            return identifier();
        }

        if (position + 1 < input.size())
        {
            std::string two_chars = input.substr(position, 2);
            if (multi_char_operators.find(two_chars) != multi_char_operators.end())
            {
                position += 2;
                return {TokenType::OPERATOR, two_chars};
            }
        }

        if (single_char_operators.find(input[position]) != single_char_operators.end())
        {
            return {TokenType::OPERATOR, std::string(1, input[position++])};
        }

        if (punctuation.find(input[position]) != punctuation.end())
        {
            char current = input[position++];
            if (isOpeningPunctuation(current))
            {
                punctuationStack.push(current);
            }
            else if (isClosingPunctuation(current))
            {
                if (punctuationStack.empty() || !matches(punctuationStack.top(), current))
                {
                    errorReported = true;
                    return {TokenType::ERROR, "Mismatched punctuation: " + std::string(1, current)};
                }
                punctuationStack.pop();
            }
            return {TokenType::PUNCTUATION, std::string(1, current)};
        }

        if (input[position] == ';')
        {
            position++;
            return getNextToken(); // Ignore semicolon
        }

        return errorToken();
    }

private:
    void skipWhitespaceAndComments()
    {
        while (position < input.size())
        {
            if (std::isspace(input[position]))
            {
                position++;
            }
            else if (input[position] == '/' && position + 1 < input.size())
            {
                if (input[position + 1] == '/')
                {
                    position += 2;
                    while (position < input.size() && input[position] != '\n')
                    {
                        position++;
                    }
                }
                else if (input[position + 1] == '*')
                {
                    position += 2;
                    while (position < input.size() - 1)
                    {
                        if (input[position] == '*' && input[position + 1] == '/')
                        {
                            position += 2;
                            break;
                        }
                        position++;
                    }
                    if (position >= input.size() - 1)
                    {
                        std::cerr << "Error: Unterminated multi-line comment" << std::endl;
                        position = input.size();
                    }
                }
                else
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }
    }

    Token number()
    {
        std::string value;
        if (input[position] == '-')
            value += input[position++];
        while (position < input.size() && (std::isdigit(input[position]) || input[position] == '.'))
        {
            value += input[position++];
        }
        return {TokenType::NUMBER, value};
    }

    Token string()
    {
        std::string value;
        position++;
        while (position < input.size() && input[position] != '"')
        {
            if (input[position] == '\\' && position + 1 < input.size())
            {
                value += input[position];
                position++;
            }
            value += input[position++];
        }
        if (position >= input.size() || input[position] != '"')
        {
            return {TokenType::ERROR, "Unterminated string literal"};
        }
        position++;
        return {TokenType::STRING, value};
    }

    Token identifier()
    {
        std::string value;
        while (position < input.size() && (std::isalnum(input[position]) || input[position] == '_'))
        {
            value += input[position++];
        }
        if (keywords.find(value) != keywords.end())
        {
            return {TokenType::KEYWORD, value};
        }
        if (booleans.find(value) != booleans.end())
        {
            return {TokenType::BOOLEAN, value};
        }
        return {TokenType::IDENTIFIER, value};
    }

    Token errorToken()
    {
        std::string errorChar(1, input[position]);
        position++;
        return {TokenType::ERROR, "Unexpected character: " + errorChar};
    }

    bool isOpeningPunctuation(char c)
    {
        return c == '(' || c == '{' || c == '[';
    }

    bool isClosingPunctuation(char c)
    {
        return c == ')' || c == '}' || c == ']';
    }

    bool matches(char opening, char closing)
    {
        return (opening == '(' && closing == ')') ||
               (opening == '{' && closing == '}') ||
               (opening == '[' && closing == ']');
    }

    const std::string input;
    size_t position;
    bool errorReported;
    std::stack<char> punctuationStack;
    const std::unordered_set<std::string> multi_char_operators = {"==", "!=", "<=", ">=", "&&", "||"};
    const std::unordered_set<char> single_char_operators = {'+', '-', '*', '/', '%', '^', '&', '|', '!', '=', '<', '>'};
    const std::unordered_set<char> punctuation = {':', '(', ')', '{', '}', '[', ']', ','};
    const std::unordered_set<std::string> keywords = {"if", "else", "elif", "while", "for", "return", "doing", "public", "private", "protected", "friend", "class", "include", "extends"};
    const std::unordered_set<std::string> booleans = {"true", "false"};
};

std::string TokenTypeToString(const Token &token)
{
    switch (token.type)
    {
    case TokenType::NUMBER:
        return "NUMBER";
    case TokenType::STRING:
        return "STRING";
    case TokenType::BOOLEAN:
        return "BOOLEAN";
    case TokenType::OPERATOR:
        return "OPERATOR";
    case TokenType::KEYWORD:
        return "KEYWORD";
    case TokenType::IDENTIFIER:
        return "IDENTIFIER";
    case TokenType::END_OF_LINE:
        return "END_OF_LINE";
    case TokenType::ERROR:
        return "ERROR";
    case TokenType::PUNCTUATION:
        return "PUNCTUATION";
    }
    return "";
}

int main(int argc, char *argv[])
{
    std::string input;
    if (argc > 1)
    {
        std::ifstream file(argv[1]);
        if (!file)
        {
            std::cerr << "Error: Cannot open file " << argv[1] << std::endl;
            return 1;
        }
        std::ostringstream buffer;
        buffer << file.rdbuf();
        input = buffer.str();
    }
    else
    {
        std::ostringstream buffer;
        buffer << std::cin.rdbuf();
        input = buffer.str();
    }

    Lexer lexer(input);
    Token token;

    while ((token = lexer.getNextToken()).type != TokenType::END_OF_LINE)
    {
        std::cout << "Token: " << token.value << " Type: " << TokenTypeToString(token) << std::endl;
    }

    return 0;
}