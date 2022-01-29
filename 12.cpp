#include <stdio.h>
#include <conio.h>

#include <string>
#include <iostream>
#include <fstream>

int main()
{
    const char filename[256] = "test.txt";

    std::ifstream ifs(filename, std::ios::in);

    static std::string slovo = "\0";
    std::cout << "Enter Slovo: "; std::cin >> slovo;

    static char c = '\0';
    std::string buf = "\0";
    while (ifs.peek() >= 0 && !ifs.eof())
    {
        ifs >> c; buf += c;
    }

    ifs.close();

    std::size_t pos = 0;
    if ((pos = buf.find(slovo, 0)) != std::string::npos)
    std::cout << "Slovo = " << slovo << " pos = " << pos << "\n";
    else std::cout << "Slovo ne naideno...\n";

    std::cin.get();
    std::cin.get();

    return 0;
}
