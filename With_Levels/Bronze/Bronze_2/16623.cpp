// problem: Laps
// id: 16623
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, t, cnt = 0, bf;
    cin >> n >> m >> bf;

    for (int i = 1; i < m; i++)
    {
        cin >> t;
        if (t < bf)
            cnt++;
        bf = t;
    }
    cout << cnt;

    return 0;
}