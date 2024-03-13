#include <bits/stdc++.h>
using namespace std;

int n;
vector<pair<pair<pair<int, int>, int>, int>> v;

bool compare(pair<pair<pair<int, int>, int>, int> a, pair<pair<pair<int, int>, int>, int> b)
{
    if (a.first.first.first == b.first.first.first)
        if (a.first.first.second == b.first.first.second)
            return a.first.second < b.first.second;
        else
            return a.first.first.second < b.first.first.second;
    else
        return a.first.first.first > b.first.first.first;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int s, c, l;
        cin >> s >> c >> l;
        v.push_back({{{s, c}, l}, i});
    }
    sort(v.begin(), v.end(), compare);
    cout << v[0].second << '\n';
    return 0;
}