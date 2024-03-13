// problem: Desni klik
// id: 26392
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, r, s;
    cin >> n >> r >> s;

    char **m = (char **)malloc(sizeof(char *) * r);
    for (int i = 0; i < r; i++)
        m[i] = (char *)malloc(sizeof(char) * s);
    while (n--)
    {
        string t;
        for (int i = 0; i < r; i++)
        {
            cin >> t;
            for (int j = 0; j < s; j++)
                m[i][j] = t[j];
        }

        int mx = 0, mn = r + 1, cnt = 0;
        for (int i = 0; i < s; i++)
        {
            cnt = 0;
            for (int j = r - 1; j >= 0; j--)
            {
                if (m[j][i] == '.')
                    cnt++;
                else
                    break;
            }
            mx = max(cnt, mx);
            mn = min(cnt, mn);
        }
        cout << mx - mn << '\n';
    }

    return 0;
}
