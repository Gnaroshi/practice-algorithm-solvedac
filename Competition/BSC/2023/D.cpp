// problem: D번 - 가변 배열
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, s0, n, m, t, u;
    cin >> s0 >> n >> m;
    u = s0;
    s = 0;
    for (int i = 0; i < n + m; i++)
    {
        cin >> t;
        if (t)
            s++;
        else
            s--;
        if (s > u)
            u *= 2;
    }
    cout << u;

    return 0;
}