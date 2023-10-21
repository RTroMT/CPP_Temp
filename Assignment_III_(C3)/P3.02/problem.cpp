// https://khmt.uit.edu.vn/wecode/it001/assignment/772/182

#include <iostream>
#include <cmath>

int check_prime(int number)
{
    if(number <= 1)
    {
        return 0;
    }

        for(int i = 2; i <= sqrt(number); i++)
        {
            if(number % i == 0)
            {
                return 0;
            }
        }

    return 1;
  
}

int main()
{
    int n = 0;
    std::cin >> n;

    //Number = 1 -> neither composite or prime
    if(n == 1)
    {
        std::cout << "-1";
    }
    else if(check_prime(n) == 1)
    {
        std::cout << "1";
    }
    else{
        std::cout << "0";
    }

    return 0;
}
