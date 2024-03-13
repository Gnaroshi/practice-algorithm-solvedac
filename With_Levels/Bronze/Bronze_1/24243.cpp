// problem: Glitching screen
// id: 24243
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, w, n;
    cin >> h >> w >> n;
    string s;
    vector<vector<string>> v(n);
    vector<string> cur(h);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < h; j++)
        {
            cin >> s;
            v[i].push_back(s);
        }
    }
    for (auto &i : cur)
        cin >> i;
    int p = 0;
    bool chk;

    for (int i = 0; i < n; i++)
    {
        chk = true;
        for (int j = 0; j < h; j++)
        {
            for (int k = 0; k < w; k++)
            {
                if (cur[j][k] == 'x')
                {
                    if (v[i][j][k] == '.')
                    {
                        chk = false;
                        break;
                    }
                }
            }
            if (!chk)
                break;
        }
        if (chk)
            p++;
    }
    if (p == 1)
        cout << "yes";
    else
        cout << "no";

    return 0;
}