// problem: 암호제작
// id: 1837
// time taken:
#include <bits/stdc++.h>
using namespace std;
// 1000001 보다 크면 항상 굿

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int k, iter;
    cin >> s >> k;
    iter = s.length();
    bool p[1000001];
    fill(p, p + 1000001, false);

    for (int i = 2; i * i <= 1000001; i++)
    {
        if (p[i])
            continue;
        for (int j = i * 2; j <= 1000001; j += i)
            p[j] = true;
    }
    int ans = 0x3f3f3f3f, t;
    for (int i = 2; i <= k; i++)
    {
        if (p[i])
            continue;
        t = 0;
        for (int j = 0; j < iter; j++)
            t = (t * 10 + s[j] - '0') % i;
        if (t == 0)
        {
            ans = i;
            break;
        }
    }
    if (ans >= k)
        cout << "GOOD";
    else
        cout << "BAD" << ' ' << ans;

    return 0;
}