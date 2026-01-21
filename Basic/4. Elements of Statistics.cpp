#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    double res1 = (a + b) / 2.0;
    double res2 = pow(a * b, 0.5);
    double res3 = 2.0 * a * b / (a + b);
    cout << res1 << endl;
    cout << res2 << endl;
    cout << res3 << endl;
    return 0;
}