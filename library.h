#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

class Library
{
private:
    std::string author;
    std::string nameBook;
    int year;

public:
    void addToLib(std::string, std::string, int);
    void showBooks();

};

#endif  // LIBRARY_H