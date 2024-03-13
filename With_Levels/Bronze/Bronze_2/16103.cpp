// problem: Drawn and Quartered
// id: 16103
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    string s;
    cin >> n >> k >> s;
    vector<string> v;
    k %= 3;
    for (int i = 0; i < 4; i++)
        v.emplace_back(s.substr(i * (n / 4), n / 4));
    cout << v[0];
    for (int i = 0; i < 3; i++)
        cout << v[(3 + i - k) % 3 + 1];

    return 0;
}