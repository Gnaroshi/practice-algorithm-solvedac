// problem: 포스터 만들기
// id: 29693
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    char **brd = (char **)malloc(sizeof(char *) * n);
    for (int i = 0; i < n; i++)
        brd[i] = (char *)malloc(sizeof(char) * m);
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < m; j++)
            brd[i][j] = s[j];
    }

    int c = m / 2;
    bool chk = false;

    if (m % 2)
    {
        for (int i = 0; i < n; i++)
        {
            if (brd[i][c] == 'X' && brd[i][c - 1] == 'X' && brd[i][c + 1] == 'X')
            {
                chk = true;
                brd[i][c] = 'Y';
                brd[i][c - 1] = brd[i][c + 1] = 'W';
                break;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (brd[i][c] == 'X' && brd[i][c - 1] == 'X' && brd[i][c + 1] == 'X' && brd[i][c - 2] == 'X')
            {
                chk = true;
                brd[i][c] = brd[i][c - 1] = 'Y';
                brd[i][c - 2] = brd[i][c + 1] = 'W';
                break;
            }
        }
    }

    if (chk)
    {
        cout << "YES\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (brd[i][j] == 'X')
                    cout << 'B';
                else
                    cout << brd[i][j];
            }
            cout << '\n';
        }
    }
    else
        cout << "NO";

    return 0;
}