// problem: Game Show!
// id: 20282
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int c;
    cin >> c;
    int mx = 100;
    int t = mx;
    for (int i = 0; i < c; i++)
    {
        int v;
        cin >> v;
        t += v;
        mx = max(mx, t);
    }
    cout << mx;

    return 0;
}