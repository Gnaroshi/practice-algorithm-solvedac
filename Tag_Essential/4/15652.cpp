#include <bits/stdc++.h>
using namespace std;

#define MX 10

int n, m;
int arr[MX];
vector<bool> vist(MX, false);

void dfs(int cur, int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = cur; i <= n; i++)
    {
        vist[i] = true;
        arr[cnt] = i;
        dfs(i, cnt + 1);
        vist[i] = false;
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    dfs(1, 0);

    return 0;
}