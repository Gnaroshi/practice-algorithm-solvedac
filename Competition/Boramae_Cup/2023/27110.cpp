#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int ans = 0;

    cin >> n;
    for (int i = 0; i < 3; i++)
    {
        int temp;
        cin >> temp;
        if (temp >= n)
            ans += n;
        else
            ans += temp;
    }
    cout << ans << '\n';

    return 0;
}