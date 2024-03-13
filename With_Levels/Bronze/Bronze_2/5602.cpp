// problem: 問題1
// id: 5602
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, t;
    cin >> n >> m;
    vector<pair<int, int>> v(m);
    for (int i = 0; i < m; i++)
        v[i].second = i + 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> t;
            v[j].first += t;
        }
    }
    sort(v.begin(), v.end(), comp);
    for (auto i : v)
        cout << i.second << ' ';

    return 0;
}