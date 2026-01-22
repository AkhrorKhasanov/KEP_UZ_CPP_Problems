#include <iostream>
using namespace std;

int solve(int n)
{
    string s = to_string(n);
    int c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        c += s[i] - '0';
    }
    return c;
}

int main()
{
    int n, i = 0;
    cin >> n;
    while (true)
    {
        i++;
        if (solve(i) == n)
        {
            break;
        }
    }
    cout << i << endl;
    return 0;
}