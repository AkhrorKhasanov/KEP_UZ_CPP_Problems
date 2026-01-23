#include <iostream>
using namespace std;

int main()
{
    int n, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a % 2)
        {
            c += a;
        }
    }
    cout << c << endl;
    return 0;
}