// problem: Haughty Cuisine
// id: 20336
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, c;
    cin >> n;
    string s;
    vector<string> ans;
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        cin >> s;
        ans.push_back(s);
    }
    for (int i = 1; i < n; i++)
    {
        cin >> m;
        for (int j = 0; j < m; j++)
            cin >> s;
    }
    cout << c << '\n';
    for (auto i : ans)
        cout << i << '\n';

    return 0;
}