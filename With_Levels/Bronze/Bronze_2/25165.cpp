// problem: 영리한 아리의 포탈 타기
// id: 25165
// time taken:
#include <bits/stdc++.h>
using namespace std;

int board[105][105];
int n, m, a, sa, sb, ca, cb, j;
bool d;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m >> a >> d >> sa >> sb;
    ca = 1, cb = a;
    for (int i = 1; i <= n; i++)
    {
        if (d)
        {
            for (j = cb; j <= m; j++)
            {
                if (i == sa && j == sb)
                {
                    cout << "NO...\n";
                    return 0;
                }
                else if (i == n && j == m)
                    break;
            }
        }
        else
        {
            for (j = cb; j >= 1; j--)
            {
                if (i == sa && j == sb)
                {
                    cout << "NO...\n";
                    return 0;
                }
                else if (i == n && j == m)
                    break;
            }
        }
        d = !d;
        cb = j;
    }
    cout << "YES!";

    return 0;
}