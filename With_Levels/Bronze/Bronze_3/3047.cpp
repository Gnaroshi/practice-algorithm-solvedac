// problem: ABC
// id: 3047
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<pair<int, char>> v;
    string s;
    for (int i = 0; i < 3; i++)
    {
        int t;
        cin >> t;
        v.push_back({t, '?'});
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < 3; i++)
    {
        v[i].second = i + 'A';
    }
    cin >> s;
    int sloc = 0;
    for (int i = 0; i < 3; i++)
    {
        for (auto j : v)
        {
            if (j.second == s[sloc])
            {
                cout << j.first << ' ';
                sloc++;
                break;
            }
        }
    }

    return 0;
}