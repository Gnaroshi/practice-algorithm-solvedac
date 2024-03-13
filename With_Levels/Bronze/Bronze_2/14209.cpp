// problem: Bridž
// id: 14209
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0;
    cin >> n;
    string s;
    while (n--)
    {
        cin >> s;
        for (auto i : s)
        {
            if (i == 'A')
                ans += 4;
            else if (i == 'K')
                ans += 3;
            else if (i == 'Q')
                ans += 2;
            else if (i == 'J')
                ans += 1;
        }
    }
    cout << ans;
    return 0;
}