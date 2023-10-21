// https://khmt.uit.edu.vn/wecode/it001/assignment/757/83

#include <iostream>
#include <cmath>

int main()
{
    double a = 0;
    int n = 0;
    std::cin >> a >> n ;
    a = a * double(n); // This will change a permanantly
    // For an alternative way, we use another vaiables to define the result of a * 
    // double result = a * n;

    a = round(a) / double(n);
    
    std::cout.precision(10);
    std::cout << a << std::endl;

    return 0;

}