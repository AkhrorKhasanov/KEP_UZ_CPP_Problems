#include <iostream>
using namespace std;

bool solve(int n)
{
    int p = 1, c = 0;
    while (n)
    {
        p *= n % 10;
        c += n % 10;
        n /= 10;
    }
    return p % c == 0;
}

int main()
{
    for (int i = 100; i < 1000; i++)
    {
        if (solve(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}