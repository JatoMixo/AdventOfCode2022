#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

// == TODO ==
// - Parse calorie numbers
// - Put numbers in arrays in a precise way
// - Calculate who carries the most
// - Give output

using std::string;

struct Elf{
    std::vector<int> calories;
};
string getList();
void getCalories(std::string list, Elf elves[]);

int main(){
    // String containing the list of calories.
    string list = getList();

    // Elves with their own array to store calories
    Elf elves[];

    getCalories(list, elves);

    //std::cout << list;
    return 0;
}

void getCalories(std::string list, Elf elves[]){
    int lines;
    for (int i = 0; i < list.length(); i++){
        if (list[i] == '\n'){
            lines++;
        }
    }
    lines++;

    int actualElf = 0;
    for (int i = 0; i < lines; i++){
        if (list[i * lines] == '\n') {
            actualElf++;
            continue;
        }

        // elves[actualElf].calories.push_back();
    }
}

string getList(){
    // Get the path of the list file.
    std::cout << "Enter path of the list of the calories every elf carries: ";
    std::string pathToList;
    std::getline(std::cin, pathToList);

    // Get the file from the path.
    std::ifstream List(pathToList);
    
    // If the file doesn't exist
    if (!List){ 
        std::cout << "The list doesn't exist.\n";
        return 0;
    } 

    // Copy the text of the file to a string
    std::string list;
    std::ostringstream s;
    s << List.rdbuf();
    list = s.str();
    
    //Close the file
    List.close();

    return list;
}