# TODO Calculate hoy many items inspected each monkey

import json
import os
from collections import defaultdict

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
            # Actual monkey
            actual_monkey = monkeys[str(j)]

            # Actual item
            h = 0
            while h < len(monkeys[str(j)]["start"]):
                # Actual item
                actual_item = actual_monkey["start"][h] 

                # Increase worry level
                if actual_monkey["operation"] == "*":
                    if actual_monkey["multiplier"] == "old":
                        actual_item *= actual_item
                    else:
                        actual_item *= actual_monkey["multiplier"]
                else:
                    if actual_monkey["multiplier"] == "old":
                        actual_item += actual_item
                    else:
                        actual_item += actual_monkey["multiplier"]

                # Throw item to new monkey
                if actual_item % actual_monkey["divisible"]:
                    monkeys[actual_monkey["true"]]["start"].append(actual_item)
                    monkeys[str(j)]["start"].pop(h)
                else:
                    monkeys[str(len(monkeys[str(j)]))["false"]]["start"].append(monkeys[str(j)]["start"][h])
                    monkeys[str(j)]["start"].pop(h)

                print(monkeys)

                items_inspected[j] += 1
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
