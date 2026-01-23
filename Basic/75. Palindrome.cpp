#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int l = 0, r = s.size() - 1;
    while (l < r)
    {
        if (tolower(s[l]) != tolower(s[r]))
        {
            cout << "False" << endl;
            return 0;
        }
        l++;
        r--;
    }
    cout << "True" << endl;
    return 0;
}