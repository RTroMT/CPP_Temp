// https://khmt.uit.edu.vn/wecode/it001/assignment/757/82

#include <iostream>
#include <cmath>

int main()
{
    float a = 0, b = 0;
    float x = 0;

    std::cin >> a >> b;
    
    switch(a != 0)
    {
        case 1:
            x = (-b / a);
            std::cout << "{" << x << "}" << std::endl;
            break;
        case 0:
            if(b == 0)
            {
                std::cout << "ℝ" << std::endl;
            }
            else 
            {
                std::cout << "Ø" << std::endl;
            }
            break;    
    }

    

    return 0;
}