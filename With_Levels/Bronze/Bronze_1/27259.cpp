// problem: Разноцветные диагонали
// id: 27259
// time taken:
#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, nx, ny;
    cin >> n;
    vector<string> v;
    string t = "";
    for (int i = 0; i < n; i++)
        t += ' ';
    for (int i = 0; i < n; i++)
        v.push_back(t);
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++)
        q.push({i, i}), v[i][i] = 'a';
    for (int i = 0; i < n; i++)
    {
        if (i == n - i - 1)
            continue;
        q.push({i, n - i - 1}), v[i][n - i - 1] = 'a';
    }
    while (!q.empty())
    {
        tie(a, b) = q.front();
        q.pop();
        // cout << a << ' ' << b << '\n';
        bool chk[4] = {0};
        // r d l u
        // 0 1 2 3
        if (a == n / 2 && b == n / 2)
            chk[0] = chk[1] = chk[2] = chk[3] = 1;
        else if (n % 2 == 0 && (a == n / 2 && b == n / 2 - 1))
            chk[0] = chk[1] = 1;
        else if (n % 2 == 0 && (a == n / 2 - 1 && b == n / 2))
            chk[2] = chk[3] = 1;
        else if (a < n / 2 && b > n / 2)
            chk[2] = chk[3] = 1;
        else if (a < n / 2 && b < n / 2)
            chk[2] = chk[1] = 1;
        else if (a > n / 2 && b > n / 2)
            chk[0] = chk[3] = 1;
        else if (a > n / 2 && b < n / 2)
            chk[0] = chk[1] = 1;

        for (int dir = 0; dir < 4; dir++)
        {
            if (!chk[dir])
                continue;
            int c = 1;
            nx = a, ny = b;

            while (true)
            {
                nx += dx[dir], ny += dy[dir];
                if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                    break;
                // cout << "new: " << nx << ' ' << ny << ' ' << v[nx][ny] << '\n';
                if (v[nx][ny] == 'a')
                    break;
                v[nx][ny] = char('a' + c % 26);

                c++;
            }
        }
    }
    for (auto i : v)
        cout << i << '\n';
    return 0;
}