//Banned define; using; switch
#include <iostream>

int main()
{
    int age; std::cin >> age;
    char gender; std::cin >>gender;
    if(gender != 'M' && gender != 'm' && gender != 'F' && gender != 'f')
        {
                    std::cout << "I do not know why" << std::endl;
        }
    else
    {
        if(gender == 'M' || gender == 'm')
            {
                if(age >= 21)
                {
                    std::cout << 1 << std::endl;
                }
                else
                {
                    std::cout << 3 << std::endl;
                }
            }

            else
            {
                if(age >= 21)
                {
                    std::cout << 2 << std::endl;
                }
                else
                {
                    std::cout << 4 << std::endl;
                }
            }
    }        

    return 0;
}