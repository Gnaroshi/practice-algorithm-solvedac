#include <bits/stdc++.h>
using namespace std;

#define MX 10

int n, m;
int arr[MX];
int ans[MX];
vector<bool> vist(MX, false);

void dfs(int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < m; i++)
            cout << ans[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (!vist[i])
        {
            vist[i] = true;
            ans[cnt] = arr[i];
            dfs(cnt + 1);
            vist[i] = false;
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);
    dfs(0);

    return 0;
}