#include "library.h"

void Library::addToLib(std::string author, std::string nameBook, int year)
{
    std::ofstream foutLib;

    foutLib.open("bookLib.txt", std::ios_base::app); // open the file for writing to the ending of file
    
    if (!foutLib.is_open()) {
        std::cout << "Cannot open the file" << std::endl;
    }
    else {
        foutLib << author
                << std::setw(40) << '\t' << nameBook 
                << std::setw(40) << '\t' << year 
                << std::endl;

        foutLib.close();
    }
}

void Library::showBooks()
{
    std::ifstream finLib;
    std::string buff;

    finLib.open("bookLib.txt", std::ios_base::in);

    if (!finLib.is_open()) {
        std::cout << "Cannot open the file" << std::endl;
    }
    else {
        while (std::getline(finLib, buff)) {
            std::cout << buff << std::endl;
        }
    }
}