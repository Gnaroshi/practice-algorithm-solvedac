#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int ans = 0;
    int nxt = -1;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp - 1 != nxt)
            ans += temp;
        nxt = temp;
    }
    cout << ans << '\n';

    return 0;
}