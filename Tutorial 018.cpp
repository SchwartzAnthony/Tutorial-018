// Tutorial 018.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// If statements 

bool isEqual(int x, int y)
{
    return (x == y); 
}

int main()
{
    std::cout << "Enter an Integer ";
    int x{}; 
    std::cin >> x; 

    std::cout << "Enter another Integer: "; 
    int y{}; 
    std::cin >> y; 

    if (isEqual(x, y))
        std::cout << x << " and " << y << " are equal \n";
    else
        std::cout << x << " and " << y << " are not equal \n"; 

    return 0; 
}


