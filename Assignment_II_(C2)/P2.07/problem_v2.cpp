#include <iostream>
#include <cmath>

int main()
{
    double a, b, c = 0;
    double delta = 0;
    std::cin >> a >> b >> c;

    delta = b*b - 4*a*c;

    if(delta < 0)
    {
        std::cout << "PTVN" << std::endl;
    }
    else if(delta == 0)
    {
        double temp_res = -b/(2*a);
        std::cout << "PT co nghiem kep: x1 = x2 = " << temp_res <<std::endl;
    }
    else
    {
        double x1 = (-b + sqrt(delta))/(2*a);
        double x2 = (-b - sqrt(delta))/(2*a);
        std::cout << "PT co hai nghiem phan biet:" << std::endl;
        std::cout << "x1 = " << x1 <<std::endl;
        std::cout << "x2 = " << x2 <<std::endl;
    }

    return 0;

    
}