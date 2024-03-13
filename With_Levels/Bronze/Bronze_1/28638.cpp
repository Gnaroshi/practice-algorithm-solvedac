// problem: Результаты контеста
// id: 28638
// time taken:
#include <bits/stdc++.h>
using namespace std;

pair<int, int> fn(string s)
{
    int h, m;
    h = stoi(s.substr(0, 2));
    m = stoi(s.substr(3));
    return {h, m};
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt[26] = {0}, tot = 0, h, m, anscnt = 0, ans = 0;
    bool chk[26] = {0};
    string tm, v;
    char x;
    int tc;
    cin >> tc;
    while (tc--)
    {
        cin >> tm >> x >> v;
        if (chk[x - 'A'] || v == "CE")
            continue;
        if (v == "OK")
        {
            tie(h, m) = fn(tm);
            chk[x - 'A'] = 1;
            cnt[x - 'A'] += h * 60 + m;
        }
        else
            chk[x - 'A'] = 0, cnt[x - 'A'] += 20;
    }
    for (int i = 0; i < 26; i++)
    {
        if (chk[i])
        {
            anscnt += chk[i];
            ans += cnt[i];
        }
    }
    cout << anscnt << ' ' << ans;

    return 0;
}