#include <iostream>
using namespace std;

int main()
{
    for (int i = 1000; i < 10000; i++)
    {
        int one = i % 10;
        int two = (i / 10) % 10;
        int three = (i / 100) % 10;
        int four = i / 1000;
        int res = one * 1000 + two * 100 + three * 10 + four;
        if (i * 4 == res)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}