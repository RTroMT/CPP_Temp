#include <iostream>
using namespace std;

int main()
{
    int temperature = 0;
    cout << "What is the outdoor temperature? ";
    cin >> temperature;
    cout << endl;

    //Code started from here
    cout << "What is your plan today? " << endl << endl;

    if(temperature < 10)
    {
        cout << "Go to bed" << endl;
    }
    else if(temperature < 24)
    {
        cout << "Good day to play tennis" <<endl;
    }
    else if(temperature < 33)
    {
        cout << "Good day for golfing" << endl;
    }
    else
    {
        cout << "Good day for swimming" << endl;
    }
    //End of code

    return 0;
}