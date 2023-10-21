// https://khmt.uit.edu.vn/wecode/it001/assignment/757/85

#include <iostream>
using namespace std;

int main()
{
    float a = 0, b = 0, c = 0;

    std::cin >> a >> b >> c;
    
    if(a > b)
    {
        if(b > c) {
            cout << c << " " << b << " " << a;
        }
        else if(a > c)
        {
            cout << b << " " << c << " " << a;
        }
        else
        {
            cout << b << " " << a << " " << c;
        }
    }
    else 
    {
        if(a > c)
        {
            cout << c << " " << a << " " << b;
        }
        else if(b > c)
        {
            cout << a << " " << c << " " << b;
        }
        else
        {
            cout << a << " " << b << " " << c;
        }
    }
    
    return 0;
}