// problem: Time Cards
// id: 6122
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a, h, mi;
    cin >> n >> m;
    bool *iss = new bool[n + 1];
    int *stt = new int[n + 1];
    int *tot = new int[n + 1];
    string s;
    fill(iss, iss + n + 1, 0);
    fill(stt, stt + n + 1, 0);
    fill(tot, tot + n + 1, 0);
    while (m--)
    {
        cin >> a >> s >> h >> mi;
        if (s.length() == 5)
            iss[a] = 1, stt[a] = h * 60 + mi;
        else
        {
            if (iss[a])
            {
                iss[a] = 0;
                tot[a] += h * 60 + mi - stt[a];
                stt[a] = 0;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << tot[i] / 60 << ' ' << tot[i] % 60 << '\n';
    }

    return 0;
}