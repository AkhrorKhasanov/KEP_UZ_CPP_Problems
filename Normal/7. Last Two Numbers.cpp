#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (i >= n - 2)
        {
            v.push_back(a);
        }
    }
    cout << v[0] << " " << v[1] << endl;
    return 0;
}