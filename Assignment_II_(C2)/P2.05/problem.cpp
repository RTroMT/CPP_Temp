// https://khmt.uit.edu.vn/wecode/it001/assignment/757/84

#include <iostream>

int main()
{
    int a = 0, b = 0;

    std::cin >> a >> b;
    switch(a == b)
    {
        case 0:
        std::cout << 0;
        break;
        
        case 1:
        std::cout << 1;
        break;
    }
     return 0;
}