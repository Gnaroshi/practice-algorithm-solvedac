// problem: 부호
// id: 1247
// time taken:
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll lmx = LLONG_MAX;
ll lmn = LLONG_MIN;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 3; i++)
    {
        int n;
        cin >> n;
        ll ans = 0, t;
        int cnt = 0;
        while (n--)
        {
            cin >> t;
            if (ans > 0 && t > 0 && (ans > lmx - t))
            {
                cnt++;
                ans += t;
            }
            else if (ans < 0 && t < 0 && (ans < lmn - t))
            {
                cnt--;
                ans += t;
            }
            else
                ans += t;
        }
        if (cnt > 0)
            cout << "+";
        else if (!cnt)
        {
            if (ans > 0)
                cout << "+";
            else if (ans < 0)
                cout << "-";
            else
                cout << 0;
        }
        else
            cout << "-";
        cout << '\n';
    }

    return 0;
}