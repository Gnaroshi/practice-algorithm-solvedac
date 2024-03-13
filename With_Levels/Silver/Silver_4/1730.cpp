// problem: 판화
// id: 1730
// time taken:
#include <bits/stdc++.h>
using namespace std;

int n, x, y, nx, ny, iter;
bool bef, cur, chk;
int dx[26], dy[26];

char ret[4] = {'.', '|', '-', '+'};
char fn(int j)
{
    return ret[j];
}

int conv(char c)
{
    if (c == 'D' || c == 'U')
        return 1;
    else
        return 2;
}

bool canMove(int a, int b, char c)
{
    return !(a + dx[c - 'A'] < 0 || a + dx[c - 'A'] >= n || b + dy[c - 'A'] < 0 || b + dy[c - 'A'] >= n);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    dy['D' - 'A'] = dy['U' - 'A'] = dx['R' - 'A'] = dx['L' - 'A'] = 0;
    dx['D' - 'A'] = dy['R' - 'A'] = 1;
    dx['U' - 'A'] = dy['L' - 'A'] = -1;

    cin >> n;
    string s, ip;

    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            v[i].push_back(0);
    }
    cin.ignore();
    getline(cin, ip);
    iter = ip.length();
    for (int i = 0; i < iter; i++)
    {
        if (canMove(x, y, ip[i]))
        {
            nx = x + dx[ip[i] - 'A'];
            ny = y + dy[ip[i] - 'A'];
            v[x][y] |= conv(ip[i]);
            v[nx][ny] |= conv(ip[i]);
            x = nx, y = ny;
        }
    }

    for (auto i : v)
    {
        for (auto j : i)
            cout << fn(j);
        cout << '\n';
    }

    return 0;
}