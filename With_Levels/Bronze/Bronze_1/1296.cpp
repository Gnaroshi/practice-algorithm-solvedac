// problem: 팀 이름 정하기
// id: 1296
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string y, t, ans = "ZZZZZZZZZZZZZZZZZZZZ";
    int n, mx = 0, sc, L, O, V, E, l, o, v, e;
    int yc[4] = {0};
    cin >> y >> n;
    L = O = V = E = 0;
    for (auto i : y)
    {
        if (i == 'L')
            L++;
        else if (i == 'O')
            O++;
        else if (i == 'V')
            V++;
        else if (i == 'E')
            E++;
    }

    while (n--)
    {
        l = o = v = e = 0;
        cin >> t;
        for (auto i : t)
        {
            if (i == 'L')
                l++;
            else if (i == 'O')
                o++;
            else if (i == 'V')
                v++;
            else if (i == 'E')
                e++;
        }
        sc = (((L + l) + (O + o)) *
              ((L + l) + (V + v)) *
              ((L + l) + (E + e)) *
              ((O + o) + (V + v)) *
              ((O + o) + (E + e)) *
              ((V + v) + (E + e))) %
             100;
        if (sc > mx)
        {
            mx = sc;
            ans = t;
        }
        else if (sc == mx)
            ans = min(ans, t);
    }
    cout << ans << '\n';

    return 0;
}