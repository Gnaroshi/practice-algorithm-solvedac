// problem: 친구 친구
// id: 10865
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;

    int fr[100001];
    fill(fr, fr + 100001, 0);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        fr[a]++;
        fr[b]++;
    }
    for (int i = 1; i <= n; i++)
        cout << fr[i] << '\n';

    return 0;
}