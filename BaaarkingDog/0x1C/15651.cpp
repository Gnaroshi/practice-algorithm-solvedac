#include <bits/stdc++.h>
using namespace std;

int n, m;
int ans[10];
int vist[10];

void func(int idx)
{
    if (idx == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << ans[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        // if (vist[i] == 0)
        // {
        //     vist[i] = 1;
        //     ans[idx] = i;
        //     func(idx + 1);

        //     vist[i] = 0;
        // }
        ans[idx] = i;
        func(idx + 1);
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    func(0);
    return 0;
}