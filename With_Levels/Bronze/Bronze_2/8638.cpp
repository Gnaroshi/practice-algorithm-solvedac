// problem: Zwycięzcy
// id: 8638
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mx = 1;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
        mx = max(mx, i);
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == mx)
            cout << char('A' + i);
    }

    return 0;
}