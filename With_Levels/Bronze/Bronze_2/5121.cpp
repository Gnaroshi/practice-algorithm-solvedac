// problem: Alarmist
// id: 5121
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Data Set " << tcc << ":\n";
        int n, w, t, mn = 0x3f3f3f3f, mx = -1;
        cin >> n >> w;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        int iter = n - w + 1, ts;
        for (int i = 0; i < iter; i++)
        {
            ts = 0;
            for (int j = i; j < i + w; j++)
                ts += v[j];
            mn = min(mn, ts / w);
            mx = max(mx, ts / w);
        }
        cout << abs(mn - mx) << "\n\n";
    }

    return 0;
}