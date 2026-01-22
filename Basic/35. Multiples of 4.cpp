#include <iostream>
using namespace std;

int main()
{
    int a, b, c = 0;
    cin >> a >> b;
    int a1 = min(a, b);
    int b1 = max(a, b);
    for (int i = a1; i <= b1; i++)
    {
        if (i % 4 == 0)
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}