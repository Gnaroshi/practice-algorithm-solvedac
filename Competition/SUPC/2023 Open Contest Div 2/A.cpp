// problem:
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;

int n, m, ans = 0;
int fn(int nm)
{
    int cnt = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i + j > nm)
                break;
            if (i + j == nm)
                cnt++;
        }
    }
    return cnt;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    int iter = n + m;
    for (int i = 0; i <= iter; i++)
        ans += fn(i);
    cout << ans;

    return 0;
}