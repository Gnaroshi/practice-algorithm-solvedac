// problem: 친구
// id: 10864
// time taken:
#include <bits/stdc++.h>
using namespace std;
const int MX = 1001;
int brd[MX];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        brd[a]++, brd[b]++;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << brd[i] << '\n';
    }

    return 0;
}