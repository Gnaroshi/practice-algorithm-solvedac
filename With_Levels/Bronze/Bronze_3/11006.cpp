// problem: 남욱이의 닭장
// id: 11006
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m, u, t;
        cin >> n >> m;
        u = m * 2 - n;
        t = m - u;
        cout << u << ' ' << t << '\n';
    }

    return 0;
}