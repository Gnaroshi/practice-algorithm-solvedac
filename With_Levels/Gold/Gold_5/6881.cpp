// problem: Number Matrix
// id: 6881
// time taken:
#include <bits/stdc++.h>
using namespace std;

int n, m;
int board[105][105];
int vist[105][105];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

vector<pair<int, int>> tv;
vector<int> v;

bool compare(pair<int, int> a, pair<int, int> b) { return a.second > b.second; }

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 10; i++)
    {
        tv.push_back({i, 0});
    }
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j];
            tv[board[i][j]].second++;
        }
    }
    sort(tv.begin(), tv.end(), compare);

    int iter = 0;
    for (auto t : tv)
    {
        if (t.second != 0)
        {
            iter++;
            v.push_back(t.first);
        }
        else
            break;
    }

    sort(v.begin(), v.end());

    int ans[3] = {-1, -1, -1};
    bool isEnd = false;
    for (int i = 0; i < iter; i++)
    {
        if (isEnd)
            break;
        for (int j = 0; j < iter; j++)
        {
            if (isEnd)
                break;
            for (int k = 0; k < iter; k++)
            {
                if (isEnd)
                    break;
                int numi, numj, numk;
                numi = v[i];
                numj = v[j];
                numk = v[k];
                queue<pair<int, int>> q;
                for (int t = 0; t < m; t++)
                    fill(vist[t], vist[t] + n, 0);
                for (int t = 0; t < n; t++)
                    q.push({0, t});

                while (!q.empty())
                {
                    pair<int, int> cur = q.front();
                    q.pop();

                    for (int dir = 0; dir < 4; dir++)
                    {
                        int cx = cur.first + dx[dir];
                        int cy = cur.second + dy[dir];
                        if (cx < 0 || cx >= m || cy < 0 || cy >= n)
                            continue;
                        if (vist[cx][cy] != 0)
                            continue;
                        if (board[cx][cy] == numi || board[cx][cy] == numj || board[cx][cy] == numk)
                        {
                            if (cx == m - 1)
                            {
                                if (numi == numj && numj == numk)
                                {
                                    ans[0] = ans[1] = 0;
                                    ans[2] = numk;
                                }
                                else if (numi == numj || numj == numk || numk == numi)
                                {
                                    ans[0] = 0;
                                    ans[1] = numk;
                                    ans[2] = numj;
                                }
                                else
                                {
                                    ans[0] = numi;
                                    ans[1] = numj;
                                    ans[2] = numk;
                                }
                                isEnd = true;
                                sort(ans, ans + 3);
                                for (int i = 0; i < 3; i++)
                                    cout << ans[i] << ' ';
                                return 0;
                            }
                            q.push({cx, cy});
                            vist[cx][cy] = 1;
                        }
                    }
                }
            }
        }
    }
    cout << -1 << ' ' << -1 << ' ' << -1;
    return 0;
}