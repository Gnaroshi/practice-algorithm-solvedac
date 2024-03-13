#include <bits/stdc++.h>
using namespace std;

const int MX_N = 1005;
const int MX_M = 105;

int n, m;
int cels[MX_N][MX_M];
vector<int> adj[MX_N];
int indeg[MX_N];

queue<int> q;
vector<int> ans;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    // cin.ignore();
    // for (int i = 0; i < m; i++)
    // {
    //     string temp;
    //     getline(cin, temp, '\n');

    //     int iter = temp[0] - '0';
    //     if (iter == 0 || iter == 1)
    //         continue;
    //     int cur;
    //     cur = temp[2] - '0';
    //     iter = temp.length();
    //     for (int j = 3; j < iter; j++)
    //     {
    //         if (temp[j] == ' ')
    //             continue;
    //         int nxt = temp[j] - '0';
    //         adj[cur].push_back(nxt);
    //         indeg[nxt]++;
    //         cur = nxt;
    //     }
    // }
    // 10자리 숫자 처리 못함
    for (int i = 0; i < m; i++)
    {
        int singers;
        cin >> singers;

        int cur, nxt;

        if (singers == 0)
            continue;
        cin >> cur;
        if (singers == 1)
            continue;
        for (int j = 0; j < singers - 1; j++)
        {
            cin >> nxt;
            adj[cur].push_back(nxt);
            indeg[nxt]++;
            cur = nxt;
        }
    }

    for (int i = 1; i <= n; i++)
        if (indeg[i] == 0)
            q.push(i);

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        ans.push_back(cur);

        for (int nxt : adj[cur])
        {
            indeg[nxt]--;
            if (indeg[nxt] == 0)
                q.push(nxt);
        }
    }

    if (ans.size() != n)
        cout << 0 << '\n';
    else
    {
        for (auto x : ans)
            cout << x << '\n';
    }

    return 0;
}