// problem: Assigning Partners
// id: 10105
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> v(n);
    map<string, string> m;
    string s;
    bool chk = true;
    for (auto &i : v)
        cin >> i;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == v[i])
            chk = false;
        m.insert({v[i], s});
    }
    for (auto i = m.begin(); i != m.end(); i++)
    {
        if (m[i->second] != i->first)
        {
            chk = false;
            break;
        }
    }
    cout << (chk ? "good" : "bad");

    return 0;
}