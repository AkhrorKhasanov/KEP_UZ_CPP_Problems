#include <iostream>
using namespace std;

int main()
{
    unsigned long long n, i, res = 1;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        res *= i * (i + 1) / 2;
    }
    cout << res << endl;
    return 0;
}