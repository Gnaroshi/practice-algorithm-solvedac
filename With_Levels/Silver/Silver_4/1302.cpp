// problem: 베스트셀러
// id: 1302
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, int> mp;
    string s, ans;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (mp.find(s) == mp.end())
            mp.insert({s, 1});
        else
            mp[s]++;
    }
    int mx = -1;
    for (auto i : mp)
    {
        if (mx < i.second)
        {
            mx = i.second;
            ans = i.first;
        }
        else if (mx == i.second)
        {
            if (ans > i.first)
            {
                ans = i.first;
            }
        }
    }
    cout << ans;

    return 0;
}