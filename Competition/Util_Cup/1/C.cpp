// problem: C번 - Union Maplestory
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;

int us(int n)
{
    int ret = 0;
    if (n >= 60)
        ret++;
    if (n >= 100)
        ret++;
    if (n >= 140)
        ret++;
    if (n >= 200)
        ret++;
    if (n >= 250)
        ret++;
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l, s = 0, u = 0;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> l;
        v.emplace_back(l);
    }
    sort(v.begin(), v.end(), greater<>());
    int iter = min(n, 42);
    for (int i = 0; i < iter; i++)
    {
        u += us(v[i]);
        s += v[i];
    }
    cout << s << ' ' << u;

    return 0;
}