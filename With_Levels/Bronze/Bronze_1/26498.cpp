// problem: Snowflakes
// id: 26498
// time taken:
#include <bits/stdc++.h>
using namespace std;

string sf[4] = {"Useless", "Beautiful", "Graceful", "Magnificent"};
int k[21][21];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            for (int j = 0; j < n; j++)
                k[i][j] = s[j];
        }
        bool hc = true, vc = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (k[i][j] != k[i][n - j - 1])
                {
                    hc = false;
                    break;
                }
            }
            if (!hc)
                break;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (k[j][i] != k[n - j - 1][i])
                {
                    vc = false;
                    break;
                }
            }
            if (!vc)
                break;
        }
        if (hc && vc)
            cout << sf[3];
        else if (vc)
            cout << sf[1];
        else if (hc)
            cout << sf[2];
        else
            cout << sf[0];
        cout << '\n';
    }

    return 0;
}