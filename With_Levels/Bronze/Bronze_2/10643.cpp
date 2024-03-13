// problem: FUNGHI
// id: 10643
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, mx = 0;
    vector<int> v;
    for (int i = 0; i < 8; i++)
    {
        cin >> t;
        v.push_back(t);
    }
    for (int i = 0; i < 8; i++)
        v.push_back(v[i]);
    for (int i = 0; i < 12; i++)
        mx = max(mx, v[i] + v[i + 1] + v[i + 2] + v[i + 3]);
    cout << mx;

    return 0;
}