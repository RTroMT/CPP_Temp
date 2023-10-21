#include <iostream>

int main()
{
    int x = 0;
    std::cin >> x;
    
    //Draw square
    std::cout << x << " " << x << " " << x << " " << x << " " << x << " " << x << std::endl;
    std::cout << x << " " << " " << " " << " " << " " << " " << " " << " " << " " << x << std::endl;
    std::cout << x << " " << " " << " " << " " << " " << " " << " " << " " << " " << x << std::endl;
    std::cout << x << " " << x << " " << x << " " << x << " " << x << " " << x << std::endl;

    //Draw triangle
    std::cout << " " << " " << " " << " " << " " << x << " " << " " << " " << " " << " " << std::endl;
    std::cout << " " << " " << " " << " " << x << " " << x << " " << " " << " " << " " << std::endl;
    std::cout << " " << " " << " " << x << " " << " " << " " << x << " " << " " << " " << std::endl;
    std::cout << " " << " " << x << " " << " " << " " << " " << " " << x << " " << " " << std::endl;
    std::cout << " " << x << " " << " " << " " << " " << " " << " " << " " << x << " " << std::endl;
    std::cout << x << " " << x << " " << x << " " << x << " " << x << " " << x << std::endl;

    return 0;
}    