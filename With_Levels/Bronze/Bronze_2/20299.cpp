// problem: 3대 측정
// id: 20299
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, l, tmc = 0;
    cin >> n >> k >> l;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int s = 0, cnt = 0, t;
        int ts[3];
        for (int j = 0; j < 3; j++)
        {
            cin >> t;
            ts[j] = t;
            s += t;
            if (t >= l)
                cnt++;
        }
        if (cnt == 3 && s >= k)
        {
            tmc++;
            for (int j = 0; j < 3; j++)
                v.push_back(ts[j]);
        }
    }

    cout << tmc << '\n';
    for (auto i : v)
        cout << i << ' ';

    return 0;
}