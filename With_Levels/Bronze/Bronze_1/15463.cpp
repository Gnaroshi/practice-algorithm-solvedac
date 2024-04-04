// problem: Blocked Billboard
// id: 15463
// tag:
// time taken:
#include <bits/stdc++.h>
using namespace std;

int fn2(int a, int b, int c, int d)
{
    return max(0, min(a, b) - max(c, d));
}

int fn(int x1, int y1, int x2, int y2, int n1, int m1, int n2, int m2)
{
    int ret = fn2(x2, n2, x1, n1) * fn2(y2, m2, y1, m1);
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ax1, ay1, ax2, ay2;
    int bx1, by1, bx2, by2;
    int tx1, ty1, tx2, ty2;
    int ret;

    cin >> ax1 >> ay1 >> ax2 >> ay2;
    cin >> bx1 >> by1 >> bx2 >> by2;
    cin >> tx1 >> ty1 >> tx2 >> ty2;
    ret = (ax2 - ax1) * (ay2 - ay1);
    ret += (bx2 - bx1) * (by2 - by1);
    ret -= fn(tx1, ty1, tx2, ty2, bx1, by1, bx2, by2);
    ret -= fn(tx1, ty1, tx2, ty2, ax1, ay1, ax2, ay2);

    cout << ret << "\n";

    return 0;
}