#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int d = a * a - 4 * b;
    double x1 = 0.5 * (a - sqrt(d));
    double x2 = 0.5 * (a + sqrt(d));
    cout << x1 << " " << x2 << endl;
    return 0;
}