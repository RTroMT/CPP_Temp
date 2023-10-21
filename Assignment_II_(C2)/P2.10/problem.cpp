// https://khmt.uit.edu.vn/wecode/it001/assignment/757/89

#include <iostream>
using namespace std;

int leap_year(int y)
{
    if(y % 4 == 0)
    {
        if(y % 100 == 0)
        {
            if(y % 400 == 0)
            {
                return 1;
            }
            else 
            { 
                return 0;
            }
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
} 

int main()
{
    int day = 0, month = 0, year = 0;
    cin >> day >> month >> year;
    
    if(year <= 0)
    {
        cout << "Nam khong hop le." << endl;
    }
    else
    {
//        if(leap_year(year) == 1)
//        {
            switch(month)
            {   
                //Febuary
                case 2:
                if(leap_year(year) == 1)
                {
                    if(day <= 29 )
                        {
                            cout << day << "/2/" << year << " la ngay hop le." << endl; 
                        }
                    /*
                    else if(day == 29)
                        {
                            cout << "29/2/" << year << " la ngay hop le." << endl;
                        }
                    */    
                    else 
                        {
                            cout << day << "/" << month << "/" << year << " la ngay khong hop le." << endl;
                        }
                    
                    break;   
                }
                else
                {
                    if(day < 29)
                    {
                        cout << day << "/2/" << year << " la ngay hop le." << endl; 
                    }
                    else
                    {
                        cout << day << "/" << month << "/" << year << " la ngay khong hop le." << endl;
                    }
                   
                    break;
                }

                // Thang 4,6,9,11
                case 4:
                case 6:
                case 9:
                case 11:
                if(day <= 30)
                {   
                    cout << day << "/" << month << "/" << year << " la ngay hop le." << endl;
                    break;
                }
                else 
                {
                    cout << day << "/" << month << "/" << year << " la ngay khong hop le." << endl;
                    break;
                }

                // Thang 1,3,5,7,8,10,12
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                if(day <= 31)
                {   
                    cout << day << "/" << month << "/" << year << " la ngay hop le." << endl;
                    break;
                }
                else 
                {
                    cout << day << "/" << month << "/" << year << " la ngay khong hop le." << endl;
                    break;
                }

                default:
                    cout << "Thang khong hop le" << endl;
                    break;
            }
//        }
//        else{

    }
}