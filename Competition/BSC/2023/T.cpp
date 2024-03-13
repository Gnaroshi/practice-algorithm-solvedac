// problem: T번 - Rick-Roll Virus
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
    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < n; i++)
        if (s[i] == 'R')
            v.push_back(i);
    for (auto p : v)
    {
        int a = max(0, p - k), b = min(n - 1, p + k);
        for (int i = a; i <= b; i++)
            s[i] = 'R';
    }
    int cnt = 0;
    for (auto i : s)
        if (i == 'R')
            cnt++;
    if (cnt <= m)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}