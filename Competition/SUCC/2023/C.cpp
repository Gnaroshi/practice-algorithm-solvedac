// problem: C번 - 동전 복사
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, y;
    cin >> n >> x >> y;
    if (n == 1)
        cout << 0;
    else if ((x == 1 && y == 1) || (x == 1 && y == n) || (x == n && y == 1) || (x == n && y == n))
        cout << 2;
    else if (x == 1 || y == 1 || x == n || y == n)
        cout << 3;
    else
        cout << 4;
    return 0;
}