// problem: Untidy Desktops
// id: 7368
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        int r, c, w, h, cnt = 0;
        int cr, cc, cw, ch;
        vector<tuple<int, int, int, int>> v;
        bool *chk = new bool[n];
        fill(chk, chk + n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> r >> c >> w >> h;
            v.push_back({r, c, w, h});
        }
        for (int i = 0; i < n - 1; i++)
        {
            tie(r, c, w, h) = v[i];
            for (int j = i + 1; j < n; j++)
            {
                tie(cr, cc, cw, ch) = v[j];
                if ((r <= cr && cr < r + h) ||
                    (r < cr + ch && cr + ch <= r + h) ||
                    (cr < r && cr < r + h && r + h < cr + ch))
                {
                    if ((c <= cc && cc < c + w) ||
                        (c < cc + cw && cc + cw <= c + w) ||
                        (cc < c && cc < c + w && c + w < cc + cw))
                        chk[i] = chk[j] = 1;
                }
            }
        }
        for (int i = 0; i < n; i++)
            cnt += chk[i];
        cout << cnt << '\n';
    }

    return 0;
}