#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, maks = 0;
    map<int, int> m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        m[a]++;
    }
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