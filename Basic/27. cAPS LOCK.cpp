#include <iostream>
#include <cctype>
using namespace std;

int main()
{

    string s;
    cin >> s;
    if (s.size() == 1)
    {
        cout << "False" << endl;
        return 0;
    }
    for (int i = 1; i < s.size(); i++)
    {
        if (!isupper(s[i]))
        {
            cout << "False" << endl;
            return 0;
        }
    }
    cout << "True" << endl;
    return 0;
}