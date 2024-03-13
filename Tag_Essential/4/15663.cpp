#include <bits/stdc++.h>
using namespace std;

#define MX 10

int n, m;
int arr[MX];
int ans[MX];
int ans_v_cnt = 0;
vector<int> ans_v[MX];
vector<bool> vist(MX, false);

void dfs(int idx)
{
    // cout << idx;
    if (idx == m)
    {
        for (int i = 0; i < m; i++)
            cout << ans[i] << ' ';

        cout << '\n';
        return;
    }

    int bef = -1;
    for (int i = 0; i < n; i++)
    {
        // vist[cur] = false;
        if (!vist[i] && arr[i] != bef)
        {
            bef = arr[i];
            vist[i] = true;
            ans[idx] = arr[i];
            dfs(idx + 1);
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