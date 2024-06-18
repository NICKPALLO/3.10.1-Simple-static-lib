#include <iostream>
#include <Windows.h>
#include "greeter.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "Введите имя: ";
    std::string name;
    std::cin >> name;
    Greeter::Greeter a;
    std::cout << a.greet(name);
}

