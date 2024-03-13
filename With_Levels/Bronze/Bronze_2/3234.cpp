// problem: LUKA
// id: 3234
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, k, cx = 0, cy = 0;
    string s;
    cin >> x >> y >> k >> s;
    bool chk = false;
    for (int i = 0; i < k; i++)
    {
        if (abs(cx - x) <= 1 && abs(cy - y) <= 1)
        {
            cout << i << '\n';
            chk = true;
        }
        if (s[i] == 'I')
            cx += 1;
        else if (s[i] == 'S')
            cy += 1;
        else if (s[i] == 'Z')
            cx -= 1;
        else
            cy -= 1;
    }
    if (abs(cx - x) <= 1 && abs(cy - y) <= 1)
    {
        cout << k << '\n';
        chk = true;
    }
    if (!chk)
        cout << -1;

    return 0;
}