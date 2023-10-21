// https://khmt.uit.edu.vn/wecode/it001/assignment/772/174


#include <iostream>

int main()
{
    int twin_prime_1st[35] = {3, 5, 11, 17, 29, 41, 59, 71, 101, 107, 137, 149, 179, 191, 197, 227, 239, 269, 281, 311, 347, 419, 431, 461, 521, 569, 599, 617, 641, 659, 809, 821, 827, 857, 881};
//  std::cout << twin_prime_1st[0];
    

    int n = 0;
    int temp = 0;
    std::cin >> n;

    if(n > 881)
    {
        for(int i = 0; i <= 34; i++)
    {
        std::cout << twin_prime_1st[i] << ", " << twin_prime_1st[i] + 2 << std::endl;
    }
    std::cout << "Tong: " << 35 << " cap so sinh doi < " << n;
    }
    else{
    for(int i = 0; i < 35; i++)
    {
        if(((twin_prime_1st[i]) + 2) == n)
        {
            temp = i - 1;
            break;
        }
        else if((twin_prime_1st[i] + 2) > n)
        {

            temp = i - 1;
            break;
        }
        

    }

    for(int i = 0; i <= temp; i++)
    {
        std::cout << twin_prime_1st[i] << ", " << twin_prime_1st[i] + 2 << std::endl;
    }

    std::cout << "Tong: " << temp + 1 << " cap so sinh doi < " << n;
    }
    return 0;
}