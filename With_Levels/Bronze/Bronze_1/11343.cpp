// problem: Crushing Confections
// id: 11343
// time taken:
#include <bits/stdc++.h>
using namespace std;

char brd[101][101];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int r, c;
        cin >> r >> c;
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                cin >> brd[i][j];
        bool chk = false;
        for (int i = 0; i < r; i++)
        {
            if (chk)
                break;
            for (int j = 0; j < c - 2; j++)
            {
                if (brd[i][j] == brd[i][j + 1] && brd[i][j] == brd[i][j + 2])
                {
                    cout << i + 1 << ' ' << j + 1 << ' '
                         << i + 1 << ' ' << j + 2 << ' '
                         << i + 1 << ' ' << j + 3 << '\n';
                    chk = true;
                    break;
                }
            }
        }
        if (chk)
            continue;
        for (int i = 0; i < r - 2; i++)
        {
            if (chk)
                break;
            for (int j = 0; j < c; j++)
            {
                if (brd[i][j] == brd[i + 1][j] && brd[i][j] == brd[i + 2][j])
                {
                    cout << i + 1 << ' ' << j + 1 << ' '
                         << i + 2 << ' ' << j + 1 << ' '
                         << i + 3 << ' ' << j + 1 << '\n';
                    chk = true;
                    break;
                }
            }
        }
        if (!chk)
            cout << "no set found\n";
    }

    return 0;
}