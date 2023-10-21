// https://khmt.uit.edu.vn/wecode/it001/assignment/757/88

#include <iostream>
#include <cmath>
#include <iomanip>

int check_triangle(int x, int y, int z)
{
    if(((x + y) > z) && ((x + z) > y) && ((y + z) > x))
    {
        return 1;
    }
    else{
        return 0;
    }
}

/*
int check_largest(int x, int y, int z)
{
    if(x >= y && x >= z)
    {
        return x;
    }
    else if(y >= x && y >= z)
    {
        return y;
    }
    else{
        return z;
    }
}*/
 
int main()
{
    int a = 0, b = 0, c = 0;
    double s = 0;

    std::cin >> a >> b >> c;
    
    if(check_triangle(a, b, c) == 0)
    {
        std::cout << "Khong phai tam giac" << std::endl;
    }
    else 
    {
        double p = 0.5 * (double(a) + double(b) + double(c));

        s = sqrt(p * (p - double(a)) * (p - double(b)) * (p - double(c)));

        if((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == b*b + a*a))
        {
            std::cout << "Tam giac vuong, dien tich = " << std::setprecision(2) << std::fixed << s << std::endl;
        }
        else if((a == b) && (b == c))
        {
            std::cout << "Tam giac deu, dien tich = " << std::setprecision(2) << std::fixed << s << std::endl;
        }
        else if((a == b) || (b == c) || (a == c))
        {
            std::cout << "Tam giac can, dien tich = " << std::setprecision(2) << std::fixed << s << std::endl;
        }
        else
        {
            std::cout << "Tam giac thuong, dien tich = " << std::setprecision(2) << std::fixed << s << std::endl;
        }
    }

    return 0;
}
