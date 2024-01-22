#include <iostream>

int main()
{
    std::cout << "enter two numbers seperated by a space: ";

    int x{};
    int y{};

    std::cin >> x >> y;

    std::cout << "you entered " << x << " and " <<  y << '\n';

    return 0;
}