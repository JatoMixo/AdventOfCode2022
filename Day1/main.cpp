#include <iostream>
#include <fstream>
#include <sstream>

using std::string;

struct Elf{
    int calories[20];
};
string getList();
void getCalories(std::string list, Elf elves[]);

int main(){
    // String containing the list of calories.
    string list = getList();

    getCalories(list, NULL);

    std::cout << list;
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
    std::cout << lines;
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