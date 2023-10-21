// https://khmt.uit.edu.vn/wecode/it001/assignment/757/86

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c = 0;
    double delta = 0,
           x1 = 0,
           x2 = 0;

    cin >> a >> b >> c;
    /*
    if(a == 0)
    {
        double temp_res = -c / b;
        cout << temp_res;
    }
    else
    {
    */

    delta = b * b - 4 * a * c;

    if(delta < 0)
    {
        cout << "PTVN" << endl;
    }
    else if(delta == 0)
    {
        double temp_res =  ((-1)*b) / (2 * a);
        cout << "PT co nghiem kep: x1 = x2 = " << temp_res << endl;
    }
    else
    {

    //b = b / a;
    //c = c / a;
    //The above action serve the purpose of using reduced formula in quadratic equation

    x1 = ((-1)*b + sqrt(delta))/ (2 * a);
    x2 = ((-1)*b - sqrt(delta))/ (2 * a);


    //Output printing
    cout << "PT co hai nghiem thuc phan biet: " << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;

    
    }
    return 0;
}