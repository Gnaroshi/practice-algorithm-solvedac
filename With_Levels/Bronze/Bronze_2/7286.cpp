// problem: Ancient Keyboard
// id: 7286
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
        int cnt[1001] = {0};
        int n = 0, a, b, st = 1001, ed = -1;
        char c;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> c >> a >> b;
            for (int j = a; j < b; j++)
                cnt[j]++;
            st = min(st, a), ed = max(ed, b);
        }
        for (int i = st; i <= ed; i++)
        {
            if (cnt[i] != 0)
                cout << char('A' + cnt[i] - 1);
        }
        cout << '\n';
    }

    return 0;
}