// problem: Good times
// id:6812
// time taken:
#include <bits/stdc++.h>
using namespace std;

int conv(int n)
{
    int ret = n;
    if (n < 0)
        ret += 2400;
    if (n >= 2400)
        ret -= 2400;
    if (ret % 100 >= 60)
    {
        int r, e;
        e = ret % 100;
        r = (ret - e) / 100 + 1;
        ret = r * 100 + e - 60;
    }
    if (ret >= 2400)
        ret -= 2400;
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    cout << t << " in Ottawa\n";
    cout << conv(t - 300) << " in Victoria\n";
    cout << conv(t - 200) << " in Edmonton\n";
    cout << conv(t - 100) << " in Winnipeg\n";
    cout << t << " in Toronto\n";
    cout << conv(t + 100) << " in Halifax\n";
    cout << conv(t + 130) << " in St. John's";

    return 0;
}