// problem: Diwali lightings (Small)
// id: 14290
// time taken:
#include <bits/stdc++.h>
using namespace std;

int fn(string s, int p)
{
    int l = s.length();
    int q = p / l, r = p % l, cnt = 0, rc = 0;
    for (auto i : s)
        if (i == 'B')
            cnt++;
    for (int i = 0; i < r; i++)
        if (s[i] == 'B')
            rc++;
    return cnt * q + rc;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        string s;
        int a, b;
        cin >> s >> a >> b;
        cout << "Case #" << tcc << ": "
             << fn(s, b) - fn(s, a) + (s[(a - 1) % s.length()] == 'B' ? 1 : 0) << '\n';
    }

    return 0;
}