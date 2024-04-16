// problem: N-퍼즐
// id: 3041
// tag:
// time taken:
#include <bits/stdc++.h>
using namespace std;

string bd[4] = {
    "ABCD",
    "EFGH",
    "IJKL",
    "MNO.",
};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = 0;
    vector<string> v(4);
    for (auto &i : v)
        cin >> i;
    unordered_map<char, pair<int, int>> m;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (v[i][j] != bd[i][j] && v[i][j] != '.')
                m[v[i][j]] = {i, j};
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            if (m.find(bd[i][j]) != m.end())
                ans += abs(m[bd[i][j]].first - i) + abs(m[bd[i][j]].second - j);
    }
    cout << ans;

    return 0;
}