// problem: Mixing Milk
// id: 16769
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<pair<int, int>> v(3);
    for (auto &i : v)
        cin >> i.first >> i.second;
    for (int i = 0; i < 100; i++)
    {
        // v[i%3].second,
        // v[(i+1)%3].second
        if (v[i % 3].second + v[(i + 1) % 3].second > v[(i + 1) % 3].first)
        {
            v[i % 3].second = (v[i % 3].second + v[(i + 1) % 3].second - v[(i + 1) % 3].first);
            v[(i + 1) % 3].second = v[(i + 1) % 3].first;
        }
        else
        {
            v[(i + 1) % 3].second += v[i % 3].second;
            v[i % 3].second = 0;
        }
    }
    for (auto i : v)
        cout << i.second << '\n';

    return 0;
}