#include <iostream>
#include <algorithm>
using namespace std;

int sum_digits(int n)
{
    int c = 0;
    while (n)
    {
        c += n % 10;
        n /= 10;
    }
    return c;
}

int find_first(int n)
{
    string s = to_string(n);
    return s[0] - '0';
}

bool cmp(int a, int b)
{
    int sa = sum_digits(a);
    int sb = sum_digits(b);
    if (sa != sb)
        return sa < sb;
    int fa = find_first(a);
    int fb = find_first(b);
    if (fa != fb)
        return fa < fb;
    return a < b;
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
    sort(arr, arr + n, cmp);
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}