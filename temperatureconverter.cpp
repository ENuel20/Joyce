#include <iostream>
using namespace std;

int convert_temp(int celcius)
{
    return ((9 * celcius)/5)+32;
}

int main()
{
    cout << convert_temp(100);
}