#include <iostream>
using namespace std;

int main()
{
    int n, res = -1, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            if (c == 1)
            {
                res = i;
            }
            c++;
        }
    }
    cout << res << endl;
    return 0;
}