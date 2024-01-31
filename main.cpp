#include <iostream>

int policz(int a, int v)
{
    return a * v;
}

int main()
{
    std::cout << "policz a * v " << policz(2, 8) << std::endl;
}