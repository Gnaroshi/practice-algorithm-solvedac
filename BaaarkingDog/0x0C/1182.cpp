#include <bits/stdc++.h>
using namespace std;

#define MX 21

int n, s;
int ans = 0;
int nums[MX];

void solv(int cur, int sum)
{
    if (cur == n)
    {
        if (sum == s)
            ans++;
        return;
    }

    solv(cur + 1, sum);
    solv(cur + 1, sum + nums[cur]);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    solv(0, 0);

    if (s == 0)
        ans--;
    cout << ans << '\n';

    return 0;
}