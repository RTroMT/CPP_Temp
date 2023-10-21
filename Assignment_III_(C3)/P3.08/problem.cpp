// https://khmt.uit.edu.vn/wecode/it001/assignment/772/176

#include <iostream>

int main()
{
    int n =0;
    int sum = 0;
//  int mang[] = {0};
    std::cin >> n;

    int i = n / 10;
    if(i == 0)
    {
        std::cout << n;
    }  
    else
    {
    while(i != 0)
    {
        i = n / 10;
        sum += n % 10;
        n = n / 10;
    }
    std::cout << sum;
    }

    

    return 0;
    
}