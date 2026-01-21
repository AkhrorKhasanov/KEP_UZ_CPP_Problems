#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool flag = false;
    int c = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] != '0')
        {
            cout << c << endl;
            flag = true;
            break;
        }
        if (s[i] == '0')
        {
            c++;
        }
    }
    if (!flag)
    {
        cout << c << endl;
    }

    return 0;
}