#include <iostream>

using namespace std;

string polarity()
{
    int num;
    cout << "enter number to check its polarity ";
    cin >> num;
    while (num >= 0)
    {
        return "positive";
    }
    return "negative";
}

int main()
{
    cout << polarity();
    return 0;
}