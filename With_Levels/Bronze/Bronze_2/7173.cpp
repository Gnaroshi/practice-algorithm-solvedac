// problem: Klass
// id: 7173
// time taken:
#include <bits/stdc++.h>
using namespace std;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int **sd = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++)
        sd[i] = (int *)malloc(sizeof(int) * m);
    string o;
    for (int i = 0; i < n; i++)
    {
        cin >> o;
        for (int j = 0; j < m; j++)
        {
            sd[i][j] = o[j] - '0';
        }
    }

    double ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            double cnt = 0, s = 0;
            for (int dir = 0; dir < 4; dir++)
            {
                int cx = i + dx[dir];
                int cy = j + dy[dir];
                if (cx < 0 || cx >= n || cy < 0 || cy >= m)
                    continue;
                cnt++;
                s += abs(sd[i][j] - sd[cx][cy]);
            }
            ans += s / cnt;
        }
    }
    cout << fixed;
    cout.precision(4);
    cout << ans;

    return 0;
}