#include <iostream>
#include <vector>
using namespace std;

vector<int> merge_arrays(const vector<int> &v1, int n, const vector<int> &v2, int m)
{
    vector<int> v;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (v1[i] <= v2[j])
        {
            v.push_back(v1[i]);
            i++;
        }
        else
        {
            v.push_back(v2[j]);
            j++;
        }
    }
    while (i < n)
    {
        v.push_back(v1[i]);
        i++;
    }
    while (j < m)
    {
        v.push_back(v2[j]);
        j++;
    }
    return v;
}

int main()
{
    int n, m;
    vector<int> v1, v2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v1.push_back(a);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int b;
        cin >> b;
        v2.push_back(b);
    }
    vector<int> v = merge_arrays(v1, n, v2, m);
    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}