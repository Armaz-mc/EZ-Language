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
        input_file = f"test/lexer/input{self.testnumber}.txt"
        if not os.path.exists(input_file):
            with open(input_file, "w") as f:
                pass
        self.run(f"build/lexer > {input_file}")
        self.run(f"build/lexer")


if __name__ == "__main__":
    test_case = input("Enter test case: ")
    test_number = int(input("Enter test number: "))
    builder = Builder(testnumber=test_number)
    match test_case:
        case "lexer":
            builder.lexer_build_and_test()
