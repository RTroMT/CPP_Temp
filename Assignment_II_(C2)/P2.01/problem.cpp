#include <iostream>

int main()
{
    int age = 0;
    char gender = {0};

    std::cin >> age;
    std::cin >> gender;
    
    if(age <= 100 && age >= 0)

    {
    switch(gender)
    {
        //Male with input 'M'
        case 'M':
        
            if(age >= 21)
            {
                std::cout << 1 << std::endl;
            }
            else 
            {
                std::cout << 3 << std::endl;
            }
        break;

        //Male with input 'm'
        case 'm':
            if(age >= 21)
            {
                std::cout << 1 << std::endl;
            }
            else 
            {
                std::cout << 3 << std::endl;
            }
        break;

        //Female with input 'F'
        case 'F':
            if(age >= 21)
            {
                std::cout << 2 << std::endl;
            }
            else
            {
                std::cout << 4 << std::endl;
            }
        break;

        //Female with input 'f'
        case 'f':
            if(age >= 21)
            {
                std::cout << 2 << std::endl;
            }
            else
            {
                std::cout << 4 << std::endl;
            }
        break;

        default: 
            std::cout << "I do not know why" << std::endl;
        break;
    }
    }
     
    else
    { 
    //Print invalid notification in case input age is outrange (0 < age <= 100)
    std::cout << "I do not know why" << std::endl;
    }
    
    
    return 0;
}