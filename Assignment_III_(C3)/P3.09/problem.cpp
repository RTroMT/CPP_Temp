#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n = 0;
    int temp = 0;
    cin >> n;

    if(n >= 0 && n < 10)
    {
        cout << "true";
    }
    else if(n < 0)
    {
        cout << "false";
    }
    else{
        int amount = 0;
        amount = log10(n);

        int interger[100];

        for(int i = amount + 1; i > 0; i--)
        {
            interger[i - 1] = n % 10;
            n = n / 10;
        }  
        
        if((amount + 1) % 2 == 0)
        {
        for(int i = 0; i <= amount/2; i ++)
        {

            if(interger[i] != interger[amount - i])
            {
                temp = 0;
            }
            else{
                temp = 1;
        }
        }
        }
        else
        {
            for(int i = 0; i < amount/2; i++)
            {
            if(interger[i] != interger[amount - i])
                {
                    temp = 0;
                }
            else{
                temp = 1;
        }
            }
        }

        if(temp == 1)
        {
            cout << "true";
        }
        else
        {
            cout << "false";
        }
    }

    return 0;
}