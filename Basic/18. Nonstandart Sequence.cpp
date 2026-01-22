#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if ((i + 2) % 3 == 0)
        {
            cout << i << " ";
        }
        else if ((i + 1) % 3 == 0)
        {
            cout << i << " " << i << " ";
        }
        else
        {
            cout << i << " " << i << " " << i << " ";
        }
    }
    return 0;
}