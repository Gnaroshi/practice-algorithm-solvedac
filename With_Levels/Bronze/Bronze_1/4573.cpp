// problem: Pizza Pricing
// id: 4573
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tcc = 1;
    int n;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        cout << "Menu " << tcc++ << ": ";
        vector<pair<int, int>> v(n);
        for (auto &i : v)
            cin >> i.first >> i.second;
        vector<pair<double, int>> t(n);
        for (int i = 0; i < n; i++)
            t[i] = {double(v[i].first * v[i].first) / double(v[i].second), i};
        sort(t.begin(), t.end(), greater<>());
        cout << v[t.front().second].first << '\n';
    }

    return 0;
}