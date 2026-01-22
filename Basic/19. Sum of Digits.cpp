#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        c += s[i] - '0';
    }
    cout << c << endl;
    return 0;
}