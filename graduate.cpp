#include <iostream>

using namespace std;
void graduate_check(int year)
{
    if (year < 2023)
    {
        cout << "you must have graduated already";
    }
    else if (year > 2023)
    {
        cout << "you are graduating in "<< year - 2023 << " years";
    }
    else
    {
        cout << "you will graduate this year";
    }
    
}

int main()
{
    graduate_check(2020);
    return 0;
}