#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int cnt = 0;
    bool isIce = false;

    if (a < 0)
    {
        isIce = true;
        while (a < 0)
        {
            a++;
            cnt += c;
        }
    }
    if (isIce)
    {
        cnt += d;
    }

    if (a != b)
    {
        while (a < b)
        {
            a++;
            cnt += e;
        }
    }
    cout << cnt << '\n';

    return 0;
}