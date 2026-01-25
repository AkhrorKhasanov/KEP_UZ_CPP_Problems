#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> solve(int n)
{
    vector<int> v;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            v.push_back(n / i);
        }
    }
    return v;
}

int main()
{
    int n;
    cin >> n;
    if (n == 2 || solve(n).size() == 0)
    {
        cout << -1 << endl;
    }
    else if (n == 4)
    {
        cout << 2 << " " << 2 << endl;
    }
    else
    {
        int one = solve(n)[0];
        int two = solve(n)[1];
        for (int i = 0; i < n - one - two; i++)
        {
            cout << 1 << " ";
        }
        cout << one << " " << two << endl;
    }
    return 0;
}