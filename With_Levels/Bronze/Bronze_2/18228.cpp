// problem: 펭귄추락대책위원회
// id: 18228
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, loc, lm = 1000000005, rm = 1000000005;
    cin >> n;
    bool chk = true;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == -1)
        {
            chk = false;
            continue;
        }
        if (chk)
            lm = min(lm, a);
        else
            rm = min(rm, a);
    }
    cout << lm + rm;

    return 0;
}