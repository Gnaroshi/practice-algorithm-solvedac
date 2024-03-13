// problem: Shorter Musical Notes
// id: 6014
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, qr, q, t;
    cin >> n >> qr;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    for (int i = 0; i < qr; i++)
    {
        cin >> q;
        t = 0;
        for (int j = 0; j < n; j++)
        {
            if (t <= q && q < t + v[j])
            {
                cout << j + 1 << '\n';
                break;
            }
            t += v[j];
        }
    }

    return 0;
}