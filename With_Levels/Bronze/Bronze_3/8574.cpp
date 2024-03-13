// problem: Ratownik
// id: 8574
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    double k, x, y, a, b;
    cin >> n >> k >> x >> y;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (sqrt((x - a) * (x - a) + (y - b) * (y - b)) <= k)
            cnt++;
    }
    cout << n - cnt;

    return 0;
}