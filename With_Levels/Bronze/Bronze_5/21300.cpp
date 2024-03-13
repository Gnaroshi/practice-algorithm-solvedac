#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = 0;
    for (int i = 0; i < 6; i++)
    {
        int temp;
        cin >> temp;
        ans += 5 * temp;
    }
    cout << ans << '\n';

    return 0;
}