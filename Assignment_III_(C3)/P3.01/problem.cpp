// https://khmt.uit.edu.vn/wecode/it001/assignment/772/0

#include <iostream>
#include <cmath>

int fib(int x)
{
    int f0 = 0, f1 = 1;
    int f_need = 0;

    for(int i = 2; i <= x; i++)
    {
        f_need = f0 + f1;
        f0 = f1;
        f1 = f_need;
    }

    return f1; // f1 is he same as f_need
}

int main()
{
    int n = 0;

    std::cin >> n;

    if(n >= 1 && n <= 30)
    {
        int output = fib(n);
        std::cout << output;
    }
    else{
        std::cout << "So " << n << " khong nam trong khoang [1,30].\n"; 
    }

    return 0;
}