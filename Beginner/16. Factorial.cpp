#include <iostream>
using namespace std;

int main()
{
    unsigned long long n, i, p = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        p *= i;
    }
    cout << p << endl;
    return 0;
}