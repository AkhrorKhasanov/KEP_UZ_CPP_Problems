#include <iostream>
using namespace std;

string solve(string s)
{
    if (s.size() == 1)
    {
        return s;
    }
    else
    {
        int c = 0;
        for (int i = 0; i < s.size(); i++)
        {
            c += s[i] - '0';
        }
        string s1 = to_string(c);
        return solve(s1);
    }
}

int main()
{
    string s;
    cin >> s;
    cout << solve(s);
    return 0;
}