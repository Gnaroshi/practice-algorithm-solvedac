// problem: J번 - 변형 체스 놀이 : 다바바(Dabbaba)
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    set<pair<int, int>> s, a;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        a.insert({x, y});
        if (x - 2 >= 1)
            s.insert({x - 2, y});
        if (y - 2 >= 1)
            s.insert({x, y - 2});
        if (x + 2 <= n)
            s.insert({x + 2, y});
        if (y + 2 <= n)
            s.insert({x, y + 2});
    }
    vector<pair<int, int>> ans;
    ans.resize(s.size() + a.size());
    auto iter = set_difference(s.begin(), s.end(), a.begin(), a.end(), ans.begin());
    ans.erase(iter, ans.end());
    cout << ans.size();

    return 0;
}