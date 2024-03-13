// problem: 정원 (Hard)
// id: 24050
// time taken:
#include <bits/stdc++.h>
using namespace std;
const int MX = 10000;

bool r[100001], c[100001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, nm, t = 0;
    cin >> n >> m;
    nm = n + m;
    for (int i = 1; i <= n; i++)
        cin >> r[i];

    for (int i = 1; i <= m; i++)
        cin >> c[i];

    for (int i = 1; i <= n; i++)
        t += (((nm - i - 1) & (m - 1)) == (m - 1)) * r[i];
    for (int i = 1; i <= m; i++)
        t += (((nm - i - 1) & (n - 1)) == (n - 1)) * c[i];
    cout << t % 2;

    return 0;
}
