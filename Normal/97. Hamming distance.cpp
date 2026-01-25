#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int len = s1.size(), c = 0;
    for (int i = 0; i < len; i++)
    {
        if (s1[i] != s2[i])
            c++;
    }
    cout << c << endl;
    return 0;
}