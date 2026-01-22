#include <iostream>
#include <map>
using namespace std;

int main()
{
    int a, b, c, maks = 0;
    map<int, int> m;
    cin >> a >> b >> c;
    m[a]++;
    m[b]++;
    m[c]++;
    for (auto e : m)
    {
        if (e.second > maks)
        {
            maks = e.second;
        }
    }
    for (auto e : m)
    {
        if (e.second == maks)
        {
            cout << e.first << endl;
            break;
        }
    }
    return 0;
}