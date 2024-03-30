// problem: 가희야 거기서 자는 거 아니야
// id: 21771
// tag:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, c, rg, cg, rp, cp, cnt = 0;
    cin >> r >> c >> rg >> cg >> rp >> cp;
    string s;
    for (int i = 0; i < r; i++)
    {
        cin >> s;
        for (auto j : s)
        {
            if (j == 'P')
                cnt++;
        }
    }
    cout << (cnt != rp * cp);

    return 0;
}