// problem: 체스
// id: 17122
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc, t;
    cin >> tc;
    while (tc--)
    {
        string a, b;
        cin >> a >> b;
        if (b.length() == 1)
            b.insert(b.begin(), '0');
        t = (b[0] - '0') * 10 + b[1] - '0';
        if (((a[1] - '0') % 2 + (a[0] - 'A' + 1) % 2) % 2 == (((t + 7) / 8) % 2 + (((t % 8) ? t % 8 : 8) % 2)) % 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}