#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n, c = 0, k = 0;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    while (k * k < n)
    {
        k++;
    }
    if (k * k > n)
    {
        k--;
    }
    for (long long i = 1; i <= k; i++)
    {
        c += (2 * i - 1) * (i - 1);
    }
    c += (n - k * k + 1) * k;
    cout << c << endl;
    return 0;
}