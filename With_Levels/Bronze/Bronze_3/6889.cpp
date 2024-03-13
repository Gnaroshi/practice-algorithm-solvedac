// problem: Smile with Similes
// id: 6889
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    string s;
    vector<string> v1;
    vector<string> v2;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v1.push_back(s);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> s;
        v2.push_back(s);
    }

    for (auto i : v1)
    {
        for (auto j : v2)
            cout << i << " as " << j << '\n';
    }

    return 0;
}