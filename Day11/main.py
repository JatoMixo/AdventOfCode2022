import json
import os

def get_data(path):
    return json.load(open(path, 'r'))

def main():
    print(str(get_data("/home/jatomixo/Code/AdventOfCode2022/Day11/monkeys.json")))

if __name__ == "__main__":
    main()
