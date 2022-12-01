#include <iostream>
#include <fstream>
#include <sstream>

using std::string;

int main(){
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

    std::cout << list;
    return 0;
}