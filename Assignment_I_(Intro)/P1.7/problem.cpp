// https://khmt.uit.edu.vn/wecode/it001/assignment/747/6

#include <iostream>

int distance(char x, char y)
{
    int result = int(x) - int(y);
    if(result < 0)
    {
        return -result;
    }
    else {
        return result;
    }

}

int main()
{
    char x;
    char y;
    int ASCII = 0;
    std::cin >> x >> y >> ASCII;

    //Using int(char) to represent ASCII code of the character
    std::cout << "Ma ASCII cua ky tu `" << x << "', `" << y << "' lan luot la " << int(x) << " va " << int(y) << std::endl;
    std::cout << "Khoang cach giua hai ky tu `" << x << "', `" << y << "' la " << distance(x, y) << std::endl;

    // Create handicap version of x
    char x_hand = (int(x) - 32);
    std::cout << "Dang viet hoa cua ky tu `" << x << "' la `" << x_hand << "'" << std::endl;

    // Creaate character defined to int
    // while(ASCII)
    char from_ASCII = ASCII;
    std::cout << ASCII << " la ma ASCII cua ky tu `" << from_ASCII << "'" << std::endl;

    return 0;
}   
     
