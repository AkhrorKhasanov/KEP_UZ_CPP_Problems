#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int l = 0, r = 0;
    l += (s[0] - '0') + (s[1] - '0') + (s[2] - '0');
    r += (s[3] - '0') + (s[4] - '0') + (s[5] - '0');
    if (l == r)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}