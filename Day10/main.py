from array import *

def get_necessary_signals():
    signals_count = int(input("How many signals do you want to calculate?: "))
    
    signals_necessary = []

    i = 0
    while i < signals_count:
        inp = int(input("Enter " + str((i + 1)) + "# signal: "))
        signals_necessary.append(inp)
        i += 1
    
    return signals_necessary

def get_path_instructions():
    path = input("Enter path of the instructions to follow: ") 
    return path

def calculate_signal(signal, path_of_instructions):
    pass

def main():
    signals_necessary = get_necessary_signals()    
    path_instructions = get_path_instructions()

    print(str(signals_necessary) + " | " + path_instructions)

if __name__ == "__main__":
    main()
