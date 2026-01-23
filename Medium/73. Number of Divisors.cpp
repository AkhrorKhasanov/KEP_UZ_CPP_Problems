#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, c = 0;
    cin >> n;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
            c++;
    }
    if (floor(sqrt(n)) * floor(sqrt(n)) == n)
    {
        cout << 2 * c - 1 << endl;
    }
    else
    {
        cout << 2 * c << endl;
    }
    return 0;
}