// problem: Lexicographical Challenge
// id: 29997
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, sl;
    string s;
    cin >> s >> k;
    sl = s.length();
    vector<string> v;
    for (int i = 0; i < k; i++)
        v.push_back("");
    for (int i = 0; i < sl; i++)
        v[i % k] += s[i];
    for (auto &i : v)
        sort(i.begin(), i.end());
    for (int i = 0; i < sl; i++)
    {
        cout << v[i % k][i / k];
    }

    return 0;
}