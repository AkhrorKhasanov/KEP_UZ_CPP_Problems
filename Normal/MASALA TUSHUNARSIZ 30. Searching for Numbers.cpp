#include <iostream>
using namespace std;

int main()
{
    int n, one = -1, two = -1, three = -1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 1 && one == -1)
        {
            one = i;
        }
        else if (a == 2 && two == -1)
        {
            two = i;
        }
        else if (a == 3 && three == -1)
        {
            three = i;
        }
    }
    cout << one << " " << two << " " << three << endl;
    return 0;
}