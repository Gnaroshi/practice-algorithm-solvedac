#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int ans = 0;
    for (int i = 0; i < 5; i++)
    {
        int temp;
        cin >> temp;
        if (temp == t)
            ans++;
    }
    cout << ans << '\n';
    return 0;
}