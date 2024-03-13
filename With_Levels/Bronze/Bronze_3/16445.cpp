// problem: Desvendando Monty Hall
// id: 16445
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    int ans = 0;
    while (tc--)
    {
        int n;
        cin >> n;
        if (n == 1)
            continue;
        else
            ans++;
    }
    cout << ans;
    return 0;
}