#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    vector<int> v(a, b);
    cout << accumulate(v.begin(), v.end(), 0) << endl;
    return 0;
}