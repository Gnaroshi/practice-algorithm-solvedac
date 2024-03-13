// problem: Stacked Floating Mountains
// id: 5238
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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
        bool chk = true;
        ll *b = (ll *)malloc(sizeof(ll) * n);
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 2; i < n; i++)
        {
            if (b[i - 1] + b[i - 2] != b[i])
            {
                chk = false;
                break;
            }
        }
        if (chk)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}