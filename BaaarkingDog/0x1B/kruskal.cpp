#include <bits/stdc++.h>
using namespace std;

int v, e;
tuple<int, int, int> edge[1000005];
bool is_diff_group(int a, int b);

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sort(edge, edge + e);
    int cnt = 0;
    for (int i = 0; i < e; i++)
    {
        int cost, a, b;
        tie(cost, a, b) = edge[i];
        if (!is_diff_group(a, b))
            continue;
        cout << cost << ' ' << a << ' ' << b << ' ' << '\n';
        cnt++;
        if (cnt == v - 1)
            break;
    }

    return 0;
}