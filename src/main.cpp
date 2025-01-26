#include <iostream>
#include "../generated/EZLanguageLexer.h"
#include "../generated/EZLanguageParser.h"
#include "antlr4-runtime.h"

using namespace antlr4;

int main()
{
    std::string input = "doing my_env; include my_package; private int test = 31; run ez:\"hello.ez\";";

    ANTLRInputStream stream(input);
    EZLanguageLexer lexer(&stream);
    CommonTokenStream tokens(&lexer);
    EZLanguageParser parser(&tokens);

    tree::ParseTree *tree = parser.program();
    std::cout << "Parse Tree: " << tree->toStringTree(&parser) << std::endl;

    return 0;
}