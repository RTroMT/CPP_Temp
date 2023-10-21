#include <iostream>
#include <iomanip>

int main()
{
    double x  = 0, CV = 0, S = 0;
    std::cin >> x;

    //CV
    CV = x * 4.00;

    //S
    S  = x * x;

    //Print using cout.precision()
    //std::cout.precision(4);

    //Using setprecision() and cout >> fixed in <iomapnip> OR using cout.precision() and cout >> fixed.
    std::cout << std::setprecision(2) << std::fixed << "Chu vi: " << CV << std::endl
                                                    << "Dien tich: " << S  << std::endl;

    /*
    --- USING cout.precision() and std::fixed ---
        std::cout.precision(2);
        std::cout << std::fixed << CV << std::endl << S << std::endl;
    */                                                
    
    return 0; 
}

/*

*/