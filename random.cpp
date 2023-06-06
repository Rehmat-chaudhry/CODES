#include <iostream>
#include <fstream>
#include <string>

int main()
{
    // Get file name and string to search for from user
    std::cout << "Enter file name: ";
    std::string fileName;
    std::getline(std::cin, fileName);

    std::cout << "Enter string to search for: ";
    std::string searchString;
    std::getline(std::cin, searchString);

    // Open file
    std::ifstream file(fileName);
    if (!file.is_open())
    {
        std::cerr << "Error: Unable to open file." << std::endl;
        return 1;
    }

    // Search file for occurrences of search string
    std::string line;
    int count = 0;
    while (std::getline(file, line))
    {
        if (line.find(searchString) != std::string::npos)
        {
            std::cout << line << std::endl;
            count++;
        }
    }

    // Print number of occurrences
    std::cout << "Number of occurrences: " << count << std::endl;

    return 0;
}
