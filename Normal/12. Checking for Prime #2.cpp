#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "No" << endl;
    }
    else if (n == 2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        bool flag = true;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}