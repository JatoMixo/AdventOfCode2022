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

            # Actual item
            h = 0
            while h < len(monkeys[str(j)]["start"]):
                if monkeys[str(j)]["operation"] == "*":
                    if monkeys[str(j)]["multiplier"] == "old":
                        monkeys[str(j)]["start"][h] *= monkeys[str(j)]["start"][h]
                    else:
                        monkeys[str(j)]["start"][h] *= monkeys[str(j)]["multiplier"]
                else:
                    monkeys[str(j)]["start"][h] += monkeys[str(j)]["multiplier"]

                if monkeys[str(j)]["start"][h] % monkeys[str(j)]["divisible"]:
                    monkeys[str(len(monkeys[str(j)]))["true"]]["start"].append(monkeys[str(j)]["start"][h])

                print(monkeys)

                h += 1
                items_inspected[j] += 1
                
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
