// problem: 도시 분할 계획
// id: 1647
// tag: graph theory, minimum spanning tree
// time taken:
// memo: keep sorting by using priotiry queue
#include <bits/stdc++.h>
using namespace std;
using ti3 = tuple<int, int, int>;

const int MX = 100005;
bool vist[MX];
vector<vector<pair<int, int>>> v(MX);
priority_queue<ti3, vector<ti3>, greater<ti3>> pq;
int n, m, a, b, c, cnt, ans, mx = -1;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    while (m--)
    {
        cin >> a >> b >> c;
        v[a].push_back({c, b});
        v[b].push_back({c, a});
    }

    vist[1] = 1;
    for (auto i : v[1])
        pq.push({i.first, 1, i.second});

    while (true)
    {
        if (cnt >= n - 1)
            break;

        tie(c, a, b) = pq.top();
        pq.pop();

        if (vist[b])
            continue;

        vist[b] = 1, mx = max(mx, c);
        ans += c, cnt++;

        for (auto i : v[b])
        {
            if (vist[i.second] == 0)
                pq.push({i.first, b, i.second});
        }
    }
    cout << max(ans - mx, 0);

    return 0;
}
