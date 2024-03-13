// problem: Cancel the Trains
// id: 27475
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
        int n, m, t;
        cin >> n >> m;
        int cnt = 0;
        int be[101] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            be[t] = 1;
        }
        for (int j = 0; j < m; j++)
        {
            cin >> t;
            if (be[t] == 1)
                cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}