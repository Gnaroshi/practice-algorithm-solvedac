// problem: C번 - 이번에는 C번이 문자열
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        vector<char> vc;
        for (int j = 0; j < m; j++)
            vc.emplace_back(s[j]);
        sort(vc.begin(), vc.end());
        v.emplace_back(string(vc.begin(), vc.end()));
    }
    sort(v.begin(), v.end());
    vector<char> ans;
    for (int i = 0; i < k; i++)
    {
        string cur = v[i];
        for (int j = 0; j < m; j++)
        {
            ans.emplace_back(cur[j]);
        }
    }
    sort(ans.begin(), ans.end());
    for (auto i : ans)
        cout << i;

    return 0;
}