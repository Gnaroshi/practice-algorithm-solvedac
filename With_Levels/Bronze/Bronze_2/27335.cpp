// problem: 年齢の差 (Age Difference)
// id: 27335
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mx = -1, mn = 1000000001;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
        mx = max(mx, i), mn = min(mn, i);
    }

    for (auto i : v)
        cout << max(abs(i - mx), abs(i - mn)) << '\n';

    return 0;
}