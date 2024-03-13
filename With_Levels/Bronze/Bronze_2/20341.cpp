// problem: Moderate Pace
// id: 20341
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> k(n), a(n), b(n);
    for (auto &i : k)
        cin >> i;
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    for (int i = 0; i < n; i++)
    {
        vector<int> t;
        t.push_back(k[i]);
        t.push_back(a[i]);
        t.push_back(b[i]);
        sort(t.begin(), t.end());
        cout << t[1] << ((i != n - 1) ? ' ' : '\n');
    }

    return 0;
}