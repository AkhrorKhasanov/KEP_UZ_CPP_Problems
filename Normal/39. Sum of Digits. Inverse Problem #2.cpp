#include <iostream>
using namespace std;

int main()
{
    int n, i = 0;
    cin >> n;
    int nine = n / 9;
    int r = n % 9;
    string s = "";
    if (r)
    {
        s += r + '0';
    }
    for (int i = 0; i < nine; i++)
    {
        s += '9';
    }
    cout << s << endl;
    return 0;
}