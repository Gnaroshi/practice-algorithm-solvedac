// problem: Another Brick in the Wall
// id: 15216
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, w, n, x, t = 0, th = 0;
    cin >> h >> w >> n;
    bool chk = false;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        t += x;
        if (t == w)
        {
            th++;
            t = 0;
        }
        else if (t > w)
        {
            cout << "NO";
            return 0;
        }
        if (th == h)
            chk = true;
    }
    if (chk)
        cout << "YES";
    else if (th != h || t != 0)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}