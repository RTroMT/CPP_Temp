//https://khmt.uit.edu.vn/wecode/it001/assignment/747/8

#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    int a = 0, b = 0, c = 0;
    float P = 0, S = 0;

    std::cin >> a >> b >> c;
    
    P = (float(a) + float(b) + float(c))/2;
    S = sqrt((P * (P - a) * (P - b) * (P - c)));

    std::cout << std::setprecision(2) << std::fixed << S << std::endl;
    
    return 0;
}