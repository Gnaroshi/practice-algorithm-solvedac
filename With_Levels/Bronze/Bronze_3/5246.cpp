// problem: Checkerboard Rows
// id: 5246
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
        int ch[8] = {0};
        int n, a, b;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            ch[b - 1]++;
        }
        int mx = -1;
        for (int i = 0; i < 8; i++)
            mx = max(mx, ch[i]);
        cout << mx << '\n';
    }

    return 0;
}