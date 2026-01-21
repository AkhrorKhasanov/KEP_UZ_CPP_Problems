#include <iostream>
using namespace std;

int main()
{
    int n;
    bool flag = true;
    cin >> n;
    if (n == 1)
    {
        cout << "No" << endl;
        return 0;
    }
    if (n == 2)
    {
        cout << "Yes" << endl;
        return 0;
    }
    for (int i = 2; i < n; i++)
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
    return 0;
}