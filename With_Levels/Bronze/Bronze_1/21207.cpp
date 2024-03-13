// problem: Train Boarding
// id: 21207
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l, p, t, mx = 0;
    cin >> n >> l >> p;
    vector<int> v(n);
    fill(v.begin(), v.end(), 0);
    for (int i = 0; i < p; i++)
    {
        cin >> t;
        int q = t / l, r = t % l;
        if (q < n)
        {
            v[q]++;
            mx = max(mx, abs(r - l / 2));
        }
        else
        {
            v[n - 1]++;
            mx = max(mx, (q - n) * l + r + l / 2);
        }
    }

    cout << mx << "\n";
    cout << *max_element(v.begin(), v.end());

    return 0;
}