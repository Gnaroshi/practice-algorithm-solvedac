// problem: Triple Texting
// id: 20733
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    vector<string> v;
    for (int i = 0; i < 3; i++)
    {
        v.push_back(s.substr(i * s.length() / 3, s.length() / 3));
    }
    sort(v.begin(), v.end());
    cout << v[1];

    return 0;
}