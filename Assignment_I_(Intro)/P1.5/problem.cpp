// https://khmt.uit.edu.vn/wecode/it001/assignment/747/4

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float a = 0, b = 0;
    int sum = 0, minus = 0, mult = 0;
    float div = 0;
    cin >> a >> b ;

    sum = a+b;
    minus = a-b;
    mult = a*b;
    div = a/b;

    cout<< a <<" + "<< b << " = " << sum <<endl;
    cout<< a <<" - "<< b << " = " << minus << endl;
    cout<< a <<" x "<< b << " = " << mult << endl;
    cout<< a <<" : "<< b << " = " << setprecision(2) << fixed << div << endl;
    return 0;
}