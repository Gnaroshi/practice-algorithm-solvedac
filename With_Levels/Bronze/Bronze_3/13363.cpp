// problem: Jumbled Compass
// id: 13363
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int cw, ccw;
    cw = ccw = 0;
    int t = a;
    while (true)
    {
        if (t == b)
            break;
        t++;
        cw++;
        if (t > 359)
            t -= 360;
    }
    t = a;
    while (true)
    {
        if (t == b)
            break;
        t--;
        ccw--;
        if (t < 0)
            t += 360;
    }
    if (min(abs(cw), abs(ccw)) == 180)
        cout << 180;
    else
    {
        if (abs(cw) < abs(ccw))
            cout << cw;
        else
            cout << ccw;
    }
    return 0;
}