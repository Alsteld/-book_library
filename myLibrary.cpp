#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

#include "library.h"

int main()
{
    Library lib;
    size_t answer;
    std::string newAuthor, newNameBook;
    int newPublishingYear;

    std::cout << "\t\t\tWECLOME TO NICK'S LIBRARY" << std::endl
              << "\t\t\t-------------------------" << std::endl;

    std::cout << "\t\t\t\tCONTENT" << std::endl
              << "\t\t\t\t-------" << std::endl;
    
    std::cout << "1 -> Show all books in library" << std::endl
              << "2 -> Add the book (author, name of the book, publishing year)" << std::endl
              << "3 -> Delete all books" << std::endl
              << "4 -> Alphabetical sorting" << std::endl
              << "5 -> Exit from library" << std::endl;
    
    std::cout << "Please, set the number of the content: ";
    std::cin >> answer;

    switch (answer)
    {
    case 1:
        lib.showBooks();
        break;

    case 2:
        std::cout << "Enter the information witout spacing!" << std::endl;
        std::cout << '\t' << "Enter the author of the book: ";
        std::cin >> newAuthor;
        std::cout << '\t' << "Enter the name of the book: ";
        std::cin >> newNameBook;
        std::cout << '\t' << "Enter the publishing year of the book: ";
        std::cin >> newPublishingYear;
        lib.addToLib(newAuthor, newNameBook, newPublishingYear);
        break;

    case 3:
        /* Here will be the method for deleting the book from library */
        break;

    case 4:
        /* Here will be the method for Alphabetical sorting all books in the library */
        break;

    case 5:
        break;

    default:
        break;
    }

    return 0;
}