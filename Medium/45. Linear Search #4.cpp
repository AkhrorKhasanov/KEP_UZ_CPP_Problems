#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, arr[10] = {0};
    cin >> n;
    map<int, int> m;
    for (int i = 1; i < 10; i++)
    {
        m[i] = 0;
        arr[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a >= 1 && a <= 9)
        {
            m[a]++;
            if (m[a] == a && arr[a] == -1)
            {
                arr[a] = i + 1;
            }
        }
    }
    for (int i = 1; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}