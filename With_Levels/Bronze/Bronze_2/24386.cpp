// problem: КЛЕЧКИ
// id: 24386
// time taken:
#include <bits/stdc++.h>
using namespace std;
int mx = 0, mn = 100, a, b;
int rd[101];
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for (int i = 0; i < 3; i++)
    {
        cin >> a >> b;
        mx = max(mx, b - a);
        mn = min(mn, b - a);
        for (int j = a; j < b; j++)
            rd[j] = 1;
    }
    int cnt = 0, bef = rd[0];
    for (int i = 1; i < 101; i++)
    {
        if (bef == 0 && rd[i] == 1)
            cnt++;
        bef = rd[i];
    }
    cout << cnt << '\n'
         << mn << ' ' << mx;

    return 0;
}