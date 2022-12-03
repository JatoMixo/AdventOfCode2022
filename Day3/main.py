

def get_compartment(line):
    comps = []
    i = 0
    comp = ""
    while i < len(line)/2:
        comp += line[int(i)]
        i += 1
    
    comps.append(comp)

    i = len(line)/2
    comp = ""
    while i < len(line):
        comp += line[int(i)]
        i += 1
    
    comps.append(comp)

    return comps

def main():
    path_list = input("Enter path of the list of rucksacks: ")
    with open(path_list, "r") as list:
        for i in list.readlines():
            print(get_compartment(i)[0])
            print(get_compartment(i)[1])



if __name__ == "__main__":
    main()