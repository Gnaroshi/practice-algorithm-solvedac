#include <bits/stdc++.h>
using namespace std;

int levels[105];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, ans;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> levels[i];

    ans = 0;
    int i = 0;
    while (true)
    {
        if (i == n - 1)
            break;
        if (levels[i] >= levels[i + 1])
        {
            int dif = levels[i] - levels[i + 1] + 1;
            levels[i] -= dif;
            ans += dif;
            i = 0;
        }
        else
            i++;
    }
    cout << ans << '\n';

    return 0;
}