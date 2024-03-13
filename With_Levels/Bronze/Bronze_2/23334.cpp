// problem: Olympic Ranking
// id: 23334
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, g, s, b;
    cin >> n;
    string c;
    vector<pair<int, string>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> g >> s >> b;
        cin.ignore();
        getline(cin, c);
        v.push_back({g * 1000000 + s * 1000 + b, c});
    }
    sort(v.begin(), v.end(), greater<>());
    cout << v.front().second;

    return 0;
}