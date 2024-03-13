// problem: 주차의 신
// id: 5054
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
        int n;
        cin >> n;
        int xmn = 0x3f3f3f3f, xmx = -1, t;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            xmn = min(xmn, t);
            xmx = max(xmx, t);
        }
        cout << (xmx - xmn) * 2 << '\n';
    }

    return 0;
}