"""
    !MOST python files will be worked by vexato. This file is an exception.
    !This file is a helper file to build and test the lexer and the rest of the other components. 
    !It is not a part of the project.
"""

import subprocess
import os


class Builder:
    def __init__(self, testnumber: int = 1):
        self.testnumber = testnumber

    def run(self, command: str):
        try:
            result = subprocess.run(
                command,
                shell=True,
                check=True,
                stdout=subprocess.PIPE,
                stderr=subprocess.PIPE,
            )
            print(result.stdout.decode())
        except subprocess.CalledProcessError as e:
            print(f"Error occurred while running command: {e}")
            print(e.stderr.decode())

    def lexer_build_and_test(self):
        self.run("g++ -o build/lexer src/frontend/lexer.cpp -std=c++17")
        input_file = f"test/lexer/input/input-{self.testnumber}.txt"
        output_file = f"test/lexer/output/output-{self.testnumber}.txt"
        if not os.path.exists(input_file):
            with open(input_file, "w") as f:
                pass
        with open(output_file, "w") as f:
            self.run(f"build/lexer < {input_file} > {output_file}")


if __name__ == "__main__":
    existing_test_cases = ["lexer"]
    print("Existing test cases: ", existing_test_cases)
    test_case = input("Enter test case: ")
    while test_case not in existing_test_cases:
        print("Invalid test case. Please enter a valid test case.")
        test_case = input("Enter test case: ")
    try:
        test_number = int(input("Enter test number: "))
    except:
        print("Invalid test number. Please enter a valid test number.")
        exit(1)
    builder = Builder(testnumber=test_number)
    if test_case == "lexer":
        builder.lexer_build_and_test()
