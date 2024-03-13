// problem: Secret Message
// id: 11093
// time taken:
#include <bits/stdc++.h>
using namespace std;

int fn(int n)
{
    for (int i = 1;; i++)
        if (i * i >= n)
            return i;
    return -1;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        int iter = s.length(), m = fn(iter);
        char **b = (char **)malloc(sizeof(char *) * m);
        for (int i = 0; i < m; i++)
        {
            b[i] = (char *)malloc(sizeof(char) * m);
            fill(b[i], b[i] + m, '*');
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i * m + j == iter)
                    break;
                b[i][j] = s[i * m + j];
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (b[m - j - 1][i] != '*')
                    cout << b[m - j - 1][i];
            }
        }
        cout << '\n';
    }

    return 0;
}