// https://khmt.uit.edu.vn/wecode/it001/assignment/757/87

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    double toan = 0,
           ly = 0,
           hoa = 0;
    double DTB = 0;

    std::cin >> toan >> ly >> hoa;

    DTB = (toan + ly + hoa)/3;

    if(DTB <= 10 && DTB >= 9 )
    {
        std::cout << std::setprecision(2) << std::fixed << "DTB = " << DTB << std::endl;
        std::cout << "Loai: XUAT SAC";
    }
    else if(DTB >= 8)
    {
        std::cout << std::setprecision(2) << std::fixed << "DTB = " << DTB << std::endl;
        std::cout << "Loai: GIOI";
    }
    else if(DTB >= 7)
    {
        std::cout << std::setprecision(2) << std::fixed << "DTB = " << DTB << std::endl;
        std::cout << "Loai: KHA";
    }
    else if(DTB >=6)
    {
        std::cout << std::setprecision(2) << std::fixed << "DTB = " << DTB << std::endl;
        std::cout << "Loai: TB KHA";
    }
    else if(DTB >=5)
    {
        std::cout << std::setprecision(2) << std::fixed << "DTB = " << DTB << std::endl;
        std::cout << "Loai: TB";
    }
    else if(DTB >= 4)
    {
        std::cout << std::setprecision(2) << std::fixed << "DTB = " << DTB << std::endl;
        std::cout << "Loai: YEU";
    }
    else
    {
        std::cout << std::setprecision(2) << std::fixed << "DTB = " << DTB << std::endl;
        std::cout << "Loai: KEM";
    }

    return 0;
}