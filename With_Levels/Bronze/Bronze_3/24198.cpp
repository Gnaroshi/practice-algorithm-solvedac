// problem: Muffinspelet
// id: 24198
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s, y;
    cin >> n;
    s = y = 0;
    bool chk = true;
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            if (chk)
                y += n / 2;
            else
                s += n / 2;
        }
        else
        {
            if (chk)
                y += n / 2 + 1;
            else
                s += n / 2 + 1;
        }
        n /= 2;
        chk = !chk;
    }
    cout << s << ' ' << y;

    return 0;
}