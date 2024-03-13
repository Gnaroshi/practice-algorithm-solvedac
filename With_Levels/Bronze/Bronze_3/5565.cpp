#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int ans = 0;
    cin >> ans;
    for (int i = 0; i < 9; i++)
    {
        int temp;
        cin >> temp;
        ans -= temp;
    }
    cout << ans << '\n';
    return 0;
}