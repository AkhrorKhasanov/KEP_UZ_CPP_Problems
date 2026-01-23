#include <iostream>
using namespace std;

int first(int arr[], int n, int x)
{
    int l = 0, r = n - 1, ans = -1;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
        {
            ans = m;
            r = m - 1;
        }
        else if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return ans;
}

int last(int arr[], int n, int x)
{
    int l = 0, r = n - 1, ans = -1;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
        {
            ans = m;
            l = m + 1;
        }
        else if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        int f = first(arr, n, x);
        if (f == -1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << last(arr, n, x) - f + 1 << endl;
        }
    }
    return 0;
}