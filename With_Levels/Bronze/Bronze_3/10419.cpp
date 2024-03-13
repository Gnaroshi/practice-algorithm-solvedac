// problem: 지각
// id: 10419
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int ans = 0;
        while (true)
        {
            if (ans + ans * ans > n)
                break;
            ans++;
        }
        cout << ans - 1 << '\n';
    }

    return 0;
}