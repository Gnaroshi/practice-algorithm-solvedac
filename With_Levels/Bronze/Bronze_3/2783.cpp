// problem: 삼각 김밥
// id: 2783
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double x, y, n;
    cin >> x >> y >> n;
    double mn = x / y;
    while (n--)
    {
        double a, b;
        cin >> a >> b;
        if (a / b < mn)
            mn = a / b;
    }
    cout << mn * 1000;

    return 0;
}