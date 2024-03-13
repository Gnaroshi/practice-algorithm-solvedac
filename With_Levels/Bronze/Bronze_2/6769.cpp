// problem: Aromatic Numbers
// id: 6769
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int ans = 0, iter = s.length();
    vector<pair<int, int>> v;
    for (int i = 0; i < iter; i += 2)
    {
        int a = s[i] - '0', b;
        if (s[i + 1] == 'M')
            b = 1000;
        else if (s[i + 1] == 'D')
            b = 500;
        else if (s[i + 1] == 'C')
            b = 100;
        else if (s[i + 1] == 'L')
            b = 50;
        else if (s[i + 1] == 'X')
            b = 10;
        else if (s[i + 1] == 'V')
            b = 5;
        else
            b = 1;
        v.push_back({b, a});
    }
    reverse(v.begin(), v.end());
    int bef = v[0].first;
    iter /= 2, ans += bef * v[0].second;
    for (int i = 1; i < iter; i++)
    {
        if (bef > v[i].first)
            ans -= v[i].first * v[i].second;
        else
            ans += v[i].first * v[i].second;
        bef = v[i].first;
    }
    cout << ans << '\n';

    return 0;
}