#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, ans;
    int cnt = 1;
    cin >> n;
    ans = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp == 1)
        {
            ans += cnt;
            cnt++;
        }
        else
        {
            cnt = 1;
        }
    }
    cout << ans << '\n';

    return 0;
}