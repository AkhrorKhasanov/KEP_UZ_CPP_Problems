#include <iostream>
using namespace std;

int main()
{
    int a, b, c = 0;
    cin >> a >> b;
    if (a % 2 == 0)
        c++;
    if (b % 2 == 0)
        c++;
    cout << c << endl;
    return 0;
}