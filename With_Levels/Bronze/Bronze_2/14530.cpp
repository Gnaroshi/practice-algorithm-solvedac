// problem: The Lost Cow
// id: 14530
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, cnt = 0, p = 1, fl = 1, cp;
    cin >> x >> y;
    cp = x;
    while (true)
    {
        while (true)
        {
            if (cp == y)
            {
                cout << cnt;
                return 0;
            }
            if (cp == fl * p + x)
                break;
            cnt++;
            cp += fl;
        }
        p *= 2;
        fl *= -1;
    }

    return 0;
}
