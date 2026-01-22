#include <iostream>
using namespace std;

int main()
{
    int n, res = -1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 1 && res == -1)
        {
            res = i;
        }
    }
    cout << res << endl;
    return 0;
}