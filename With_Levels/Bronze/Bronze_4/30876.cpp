// problem: Tren del Fin del Mundo
// id: 30876
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ax, ay = 1001, x, y;
    cin >> n;
    while (n--)
    {
        cin >> x >> y;
        if (y < ay)
            ax = x, ay = y;
    }
    cout << ax << ' ' << ay;

    return 0;
}