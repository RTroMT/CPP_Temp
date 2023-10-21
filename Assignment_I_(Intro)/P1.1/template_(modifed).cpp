/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
;
###End banned keyword*/
#include <iostream>

using namespace std;



int main()
{
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    double x;
    cin >> x;
//###INSERT CODE HERE -
    float  Celsius = 0;
    float  Kelvin = 0;
    Celsius = (x-32.0)/1.8;             // F to C formula
    Kelvin = Celsius + 273.15;          // Using existing float-Celsius with C to K formula
    cout << Celsius << "  " << Kelvin << endl;
//  cout << "  " << endl;
//  cout << Kelvin  << endl;
//###END OF CODE
    return 0;
}

// WRONG ON BANNED WORDS