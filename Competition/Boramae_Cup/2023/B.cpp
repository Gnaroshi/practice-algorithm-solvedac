#include <bits/stdc++.h>
using namespace std;

vector<pair<pair<int, int>, int>> v;

bool cmp(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b)
{
    if (a.second != b.second)
    {
        return a.second < b.second;
    }
    else
    {
        return a.first.first < b.first.first;
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    int *t = (int *)malloc(sizeof(int) * n);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> t[i];
    int ans = 0;

    for (int i = 0; i < m; i++)
    {
        int s, e, r;
        cin >> s >> e >> r;
        v.push_back({{s, e}, r});
    }
    sort(v.begin(), v.end(), cmp);

    cout << "----------\n";
    for (auto i : v)
    {
        cout << i.first.first << ' ' << i.first.second << ' ' << i.second << '\n';
    }

    int station = 0;
    while (!v.empty())
    {

        station++;
        if (station == n)
        {
            station = 0;
        }
    }

    return 0;
}