// problem: 몬스터 트럭
// id: 2897
// time taken:
#include <bits/stdc++.h>
using namespace std;

pair<int, int> d[4] = {{0, 0}, {0, -1}, {-1, -1}, {-1, 0}};

char brd[51][51];
int ans[5];
int cnt, x, y;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, c;
    cin >> r >> c;
    string s;
    for (int i = 0; i < r; i++)
    {
        cin >> s;
        for (int j = 0; j < c; j++)
            brd[i][j] = s[j];
    }

    for (int i = 1; i < r; i++)
    {
        for (int j = 1; j < c; j++)
        {
            cnt = 0;
            for (int dir = 0; dir < 4; dir++)
            {
                x = i + d[dir].first;
                y = j + d[dir].second;
                if (brd[x][y] == '#')
                {
                    cnt = -1;
                    break;
                }
                if (brd[x][y] == 'X')
                    cnt++;
            }
            if (cnt == -1)
                continue;
            ans[cnt]++;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << ans[i] << '\n';
    }

    return 0;
}