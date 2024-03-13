// problem: 공간을 만들어 봅시다
// id: 10471
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int w, p, t;
    cin >> w >> p;
    vector<int> v;
    set<int> ans;
    v.emplace_back(0);
    for (int i = 0; i < p; i++)
    {
        cin >> t;
        v.emplace_back(t);
    }
    v.emplace_back(w);
    reverse(v.begin(), v.end());
    int iter = v.size();
    for (int i = 0; i < iter; i++)
    {
        for (int j = i + 1; j < iter; j++)
            ans.insert(v[i] - v[j]);
    }
    for (auto i : ans)
        cout << i << ' ';

    return 0;
}