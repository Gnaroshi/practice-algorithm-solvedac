// problem: Zbalansowane słowa
// id: 26692
// time taken:
// https://blog.csdn.net/xxyrcgtzbh554488/article/details/136101235

#include <bits/stdc++.h>
using namespace std;
using ll = unsigned int long long;
const int MX = 300010;

int sl, si[MX], sid[MX], i;
ll ans, tcnt, cnt, sc[MX], sb[MX], rid;
char s[MX];
unordered_map<ll, int> mp;

mt19937 rand_(time(NULL));
ll Rand()
{
    return rid = rid * rid + rand_();
}
int main(void)
{
    scanf("%s", s + 1);
    sl = strlen(s + 1);

    for (i = 1; i <= sl; i++)
        si[i] = s[i] - 'a';

    for (int pm = 1; pm < 8; pm++)
    {
        tcnt = cnt = 0;
        if (pm & 1)
            sid[++tcnt] = 0;
        if (pm >> 1 & 1)
            sid[++tcnt] = 1;
        if (pm >> 2)
            sid[++tcnt] = 2;

        for (i = 0; i < 3; i++)
            sb[i] = Rand();

        for (i = 1; i < tcnt; i++)
            cnt += sb[sid[i]];

        sb[sid[tcnt]] = -cnt;
        mp.clear();
        for (i = 1, mp[0] = 1; i <= sl; i++)
        {
            sc[i] = sc[i - 1] + sb[si[i]];
            ans += mp[sc[i]]++;
        }
    }

    printf("%lld", ans);

    return 0;
}