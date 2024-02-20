#include <iostream>

using namespace std;

bool is_even(int num)
{
    return num %2 == 0;
}

int main()
{
    cout << is_even(42);
    return 0;
}