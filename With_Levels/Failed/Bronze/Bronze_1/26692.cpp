// problem: Zbalansowane słowa
// id: 26692
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

template <>
struct std::hash<pair<int, int>>
{
    size_t operator()(const pair<int, int> p) const
    {
        return p.first * 8191 ^ p.second;
    }
};

char s[300010];

int main(void)
{
    ll ans = 0, tcnt = 0, cnt = 0;
    scanf("%s", s);
    int iter = strlen(s);
    char bef = 0;
    for (int i = 0; i < iter; i++)
    {
        if (s[i] != bef)
        {
            bef = s[i];
            tcnt = 0;
        }
        tcnt++;
        cnt += tcnt;
    }
    ans += cnt;

    vector<pair<char, char>> v;
    v.push_back({'a', 'b'});
    v.push_back({'b', 'c'});
    v.push_back({'c', 'a'});

    for (auto p : v)
    {
        char a = p.first, b = p.second;
        cnt = tcnt = 0;
        unordered_map<int, int> mp;
        mp[0]++;
        for (int i = 0; i < iter; i++)
        {
            if (s[i] == a)
                tcnt++;
            else if (s[i] == b)
                tcnt--;
            else
            {
                mp.clear();
                tcnt = 0;
            }
            cnt += mp[tcnt];
            mp[tcnt]++;
        }
        ans += cnt;
    }

    cnt = 0;
    unordered_map<pair<int, int>, int> mp;
    pair<int, int> te{0, 0};
    mp[te]++;
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == 'a')
        {
            te.first++;
            te.second++;
        }
        else if (s[i] == 'b')
        {
            te.first--;
        }
        else
        {
            te.second--;
        }
        cnt += mp[te];
        mp[te]++;
    }
    ans += cnt;

    printf("%lld", ans);

    return 0;
}