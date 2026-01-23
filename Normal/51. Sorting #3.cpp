#include <iostream>
#include <algorithm>
using namespace std;

struct Point
{
    int x, y;
};

bool cmp(Point a, Point b)
{
    if (a.x != b.x)
        return a.x < b.x;
    return a.y < b.y;
}

int main()
{
    int n;
    cin >> n;
    Point p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].x >> p[i].y;
    }
    sort(p, p + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << p[i].x << " " << p[i].y << endl;
    }
    return 0;
}