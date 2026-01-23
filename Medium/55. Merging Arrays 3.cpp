#include <iostream>
#include <vector>
using namespace std;

vector<int> merge_arrays(const vector<int> &v1, int n, const vector<int> &v2, int m, const vector<int> &v3, int k)
{
    vector<int> v;
    int i = 0, j = 0, l = 0;
    while (i < n || j < m || l < k)
    {
        int val = 1000000001;
        if (i < n)
            val = min(val, v1[i]);
        if (j < m)
            val = min(val, v2[j]);
        if (l < k)
            val = min(val, v3[l]);

        if (i < n && v1[i] == val)
            i++;
        else if (j < m && v2[j] == val)
            j++;
        else if (l < k && v3[l] == val)
            l++;
        v.push_back(val);
    }
    return v;
}

int main()
{
    int n, m, k;
    vector<int> v1, v2, v3;
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
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int c;
        cin >> c;
        v3.push_back(c);
    }
    vector<int> v = merge_arrays(v1, n, v2, m, v3, k);
    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}