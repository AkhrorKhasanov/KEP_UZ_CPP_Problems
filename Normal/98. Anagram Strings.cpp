#include <iostream>
#include <map>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    map<char, int> m1;
    map<char, int> m2;
    for (int i = 0; i < s1.size(); i++)
    {
        m1[s1[i]]++;
    }
    for (int i = 0; i < s2.size(); i++)
    {
        m2[s2[i]]++;
    }
    if (m1 == m2)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}