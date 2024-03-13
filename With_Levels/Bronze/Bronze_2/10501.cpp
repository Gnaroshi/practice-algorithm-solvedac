// problem: Ragged Right
// id: 10501
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = 0, mx = -1;
    string s;
    vector<int> v;
    while (getline(cin, s))
    {
        int iter = s.length();
        v.push_back(iter);
        mx = max(mx, iter);
    }
    for (int i = 0; i < v.size() - 1; i++)
    {
        ans += (mx - v[i]) * (mx - v[i]);
    }
    cout << ans;

    return 0;
}