// problem: László Babai
// id: 13450
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
        int m, n, u, v;
        cin >> m;
        bool chk = true;
        for (int i = 0; i < m; i++)
            cin >> u >> v;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> u >> v;
        if (m != n)
            chk = false;
        cout << (chk ? "yes\n" : "no\n");
    }

    return 0;
}