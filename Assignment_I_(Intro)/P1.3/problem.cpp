#include <iostream>

int main()
{
    int x = 0;
    std::cin >> x;
    int result = 0;
    
    result = x * ((x > 0) - (x < 0));

    std::cout << result << std::endl;
    
    return 0;
}

