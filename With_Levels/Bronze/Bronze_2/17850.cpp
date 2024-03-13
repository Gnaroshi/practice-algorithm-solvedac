// problem: Make America Grade Again
// id: 17850
// time taken:
#include <bits/stdc++.h>
using namespace std;

int l, h, p, e, n;
double ls, hs, ps, es;
double lc, hc, pc, ec;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> l >> h >> p >> e >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, iter;
        string s, t, g;
        cin >> s >> t >> g;
        iter = g.length();
        for (int j = 0; j < iter; j++)
            if (g[j] == '/')
                g[j] = ' ';
        stringstream st;
        st.str(g);
        st >> a >> b;
        if (s[0] == 'L')
        {
            ls += a;
            lc += b;
        }
        else if (s[0] == 'H')
        {
            hs += a;
            hc += b;
        }
        else if (s[0] == 'P')
        {
            ps += a;
            pc += b;
        }
        else
        {
            es += a;
            ec += b;
        }
    }
    cout << int(l * ls / lc + h * hs / hc + p * ps / pc + e * es / ec);

    return 0;
}