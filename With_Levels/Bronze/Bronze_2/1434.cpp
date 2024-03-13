#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[100];
int b[100];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    fill(a, a + 100, -1);
    fill(b, b + 100, -1);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int a_loc = 0;
    int b_loc = 0;
    while (true)
    {
        if (a[a_loc] == -1 || b[b_loc] == -1)
            break;
        if (a[a_loc] - b[b_loc] >= 0)
        {
            a[a_loc] -= b[b_loc];
            b_loc++;
        }
        else
            a_loc++;
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
        ans += a[i];
    cout << ans << '\n';

    return 0;
}