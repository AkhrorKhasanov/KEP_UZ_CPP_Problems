#include <iostream>
using namespace std;

int main()
{
    int n, k, res = -1, c = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            c++;
        }
        if (a == 1 && c == k && res == -1)
        {
            res = i;
        }
    }
    cout << res << endl;
    return 0;
}