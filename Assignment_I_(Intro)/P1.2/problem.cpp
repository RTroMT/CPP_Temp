#include <iostream>

int main()
{
    float psi = 0, result = 0;
    float square_inch = 0, kg = 0; 
    
    // A square inch equal to 2.54x2.54(cm)
    square_inch = 2.54 * 2.54;
    
    // Get input
    std::cin >> psi;
    
    kg = psi * 0.453592; // 1 pound = 0.453592 kg
    result = kg / square_inch; // Result = kg/cm2
    
    // Output
    std::cout << result << std::endl;
    
    return 0;
}