#include <bits/stdc++.h>
using namespace std;

int v, e;
vector<int> p(305, -1);
tuple<int, int, int> edges[100005];

int find_parent(int x)
{
    if (p[x] < 0)
        return x;
    return p[x] = find_parent(p[x]);
}

bool in_group(int a, int b)
{
    a = find_parent(a);
    b = find_parent(b);
    if (a == b)
        return false;
    if (p[a] == p[b])
        p[a]--;
    if (p[a] < p[b])
        p[b] = a;
    else
        p[a] = b;
    return true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> v;
    for (int i = 1; i <= v; i++)
    {
        int cost;
        cin >> cost;
        // e starts 0
        edges[e++] = {cost, i, v + 1};
    }
    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            int cost;
            cin >> cost;
            if (i >= j)
                continue;
            edges[e++] = {cost, i, j};
        }
    }

    v++;
    sort(edges, edges + e);
    int iter = 0;
    int ans = 0;
    for (int i = 0; i < e; i++)
    {
        int a, b, cost;
        tie(cost, a, b) = edges[i];
        if (!in_group(a, b))
            continue;
        iter++;
        ans += cost;
        if (iter == v - 1)
            break;
    }
    cout << ans << '\n';

    return 0;
}