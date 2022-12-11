# TODO Calculate hoy many items inspected each monkey

import json
import os

# Get the data from the JSON file in form of dictionary
def get_data(path):
    return json.load(open(path, 'r'))

# Calculate which monkey has which item on every round
def calculate_items_inspected(monkeys, rounds):
    items_inspected = []

    # Actual round
    i = 0
    while i < rounds:

        # Actual monkey
        j = 0
        while j < len(monkeys):

            # Actual item
            h = 0
            actual_monkey = monkeys[j]
            while h < len(actual_monkey[start]):
                actual_item = actual_monkey[start][h]
                h += 1
                
            j += 1

        i += 1

# Calculate monkey business
def calculate_monkey_business(monkeys):
    high_monkeys = [0, 0]
    
    i = 0
    while i < len(monkeys):
        if monkeys[i] >= high_monkeys[0]:
            high_monkeys[1] = high_monkeys[0]
            high_monkeys[0] = monkeys[i]

        i += 1
    
    return high_monkeys[0] * high_monkeys[1]

def main():
    monkeys = get_data(input("Enter path of the monkeys' data file: "))
    calculate_items_inspected(monkeys, int(input("How many rounds do you want to calculate: ")))
    print(calculate_monkey_business([101, 95, 7, 105]))

if __name__ == "__main__":
    main()
