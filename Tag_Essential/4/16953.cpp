#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b;
    cin >> a >> b;
    int ans = 0;

    bool isAble = false;
    while (b >= a)
    {
        // cout << "b: " << b << '\n';
        if (a == b)
        {
            isAble = true;
            break;
        }
        if (b % 2 == 0)
        {
            ans++;
            b /= 2;
        }
        else
        {
            if (b % 10 != 1)
            {
                if (b != a)
                {
                    isAble = false;
                    break;
                }
            }
            else
            {
                ans++;
                b /= 10;
            }
        }
    }
    if (isAble)
        cout << ans + 1 << '\n';
    else
        cout << -1 << '\n';

    return 0;
}