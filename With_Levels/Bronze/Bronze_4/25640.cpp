#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string j;
    int n;
    int ans = 0;
    cin >> j >> n;
    while (n--)
    {
        string temp;
        cin >> temp;
        if (j == temp)
            ans++;
    }
    cout << ans << '\n';

    return 0;
}
