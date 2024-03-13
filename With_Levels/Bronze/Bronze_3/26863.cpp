// problem: Absolutely Flat
// id: 26863
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int mx = -1, b;
    bool isOk = true, used = false;
    int a[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    cin >> b;
    for (int i = 0; i < 4; i++)
    {
        if (a[i] < mx)
        {
            if (used)
                isOk = false;
            else
            {
                if (a[i] + b == mx)
                {
                    used = true;
                }
                else
                    isOk = false;
            }
        }
    }
    cout << isOk;

    return 0;
}