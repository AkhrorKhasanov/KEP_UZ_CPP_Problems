#include <iostream>
using namespace std;

bool is_sum_even(int n)
{
    int one = n % 10;
    int two = (n / 10) % 10;
    int three = (n / 100) % 10;
    int four = n / 1000;
    int res = one + two + three + four;
    if (res % 2)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    for (int i = 1000; i < 10000; i++)
    {
        if (is_sum_even(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}