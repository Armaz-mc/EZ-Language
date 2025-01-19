/*
    THIS IS AN EXAMPLE OF A LEXER IMPLEMENTATION IN C++.
    THIS WILL NOT BE USED IN THE FINAL PROJECT.
    THIS IS JUST FOR LEARNING PURPOSES.
    THIS IS A SIMPLE LEXER THAT CAN TOKENIZE NUMBERS, STRINGS, BOOLEAN, KEYWORD AND OPERATORS.
*/

#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <unordered_set>

enum class TokenType
{
    NUMBER,
    STRING,
    BOOLEAN,
    OPERATOR,
    KEYWORD,
    END_OF_LINE,
    UNKNOWN
};

struct Token
{
    TokenType type;
    std::string value;
};

class Lexer
{
public:
    Lexer(const std::string &input) : input(input), position(0) {}

    Token getNextToken()
    {
        skipWhitespace();

        if (position >= input.size() || input[position] == ';')
        {
            return {TokenType::END_OF_LINE, ""};
        }

        if (std::isdigit(input[position]))
        {
            return number();
        }

        if (input[position] == '"')
        {
            return string();
        }

        if (operators.find(input[position]) != operators.end())
        {
            return {TokenType::OPERATOR, std::string(1, input[position++])};
        }

        std::string value;
        while (position < input.size() && !std::isspace(input[position]) && input[position] != ';')
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

        return {TokenType::UNKNOWN, value};
    }

private:
    void skipWhitespace()
    {
        while (position < input.size() && std::isspace(input[position]))
        {
            ++position;
        }
    }

    Token number()
    {
        std::string value;
        while (position < input.size() && std::isdigit(input[position]))
        {
            value += input[position++];
        }
        return {TokenType::NUMBER, value};
    }

    Token string()
    {
        std::string value;
        ++position; // Skip the opening quote
        while (position < input.size() && input[position] != '"')
        {
            value += input[position++];
        }
        ++position; // Skip the closing quote
        return {TokenType::STRING, value};
    }

    std::string input;
    size_t position;
    const std::unordered_set<char> operators = {'+', '-', '*', '/'};
    const std::unordered_set<std::string> keywords = {"if", "else", "elif", "while", "for", "return"};
    const std::unordered_set<std::string> booleans = {"true", "false"};
};

int main()
{
    std::string input;
    std::getline(std::cin, input);
    Lexer lexer(input);
    Token token;

    while ((token = lexer.getNextToken()).type != TokenType::END_OF_LINE)
    {
        std::cout << "Token: " << token.value << " Type: " << static_cast<int>(token.type) << std::endl;
    }

    return 0;
}