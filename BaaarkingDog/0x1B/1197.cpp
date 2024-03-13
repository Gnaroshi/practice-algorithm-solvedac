#include <bits/stdc++.h>
using namespace std;

#define MX_V 10005
#define MX_E 100005

int v, e;
vector<int> nodes(MX_V, -1);
tuple<int, int, int> edges[MX_E]; // value, node, node

int search_node(int temp)
{
    if (nodes[temp] < 0)
        return temp;
    return nodes[temp] = search_node(nodes[temp]);
}

bool in_group(int u, int v)
{
    u = search_node(u);
    v = search_node(v);
    if (u == v)
        return false;
    if (nodes[u] == nodes[v])
        nodes[u]--;
    if (nodes[u] < nodes[v])
        nodes[v] = u;
    else
        nodes[u] = v;
    return true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        int node_u, node_v, w;
        cin >> node_u >> node_v >> w;
        // to comparing tuples, retain tuple compare order
        edges[i] = {w, node_u, node_v};
    }

    sort(edges, edges + e);

    int cnt, ans;
    cnt = ans = 0;
    for (int i = 0; i < e; i++)
    {
        int node_u, node_v, w;
        w = get<0>(edges[i]);
        node_u = get<1>(edges[i]);
        node_v = get<2>(edges[i]);
        if (!in_group(node_u, node_v))
            continue;
        ans += w;
        cnt++;
        if (cnt == v - 1)
            break;
    }
    cout << ans;

    return 0;
}