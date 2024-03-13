// problem: Number Maximization
// id: 25773
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int iter = s.length();
    vector<int> v;
    for (int i = 0; i < iter; i++)
        v.push_back(s[i] - '0');
    sort(v.begin(), v.end(), greater<>());
    for (auto i : v)
        cout << i;

    return 0;
}