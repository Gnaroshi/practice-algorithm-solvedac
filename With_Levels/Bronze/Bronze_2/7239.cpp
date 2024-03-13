// problem: Pjūklas
// id: 7239
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n;
    vector<int> a, b, v;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        v.emplace_back(t);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (i >= n / 2)
            a.emplace_back(v[i]);
        else
            b.emplace_back(v[i]);
    }
    reverse(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
            cout << b[i / 2] << ' ';
        else
            cout << a[i / 2] << ' ';
    }

    return 0;
}