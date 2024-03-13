// problem: 방형구 탐색 (Easy)
// id: 30503
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q, op, l, r, k, cnt;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    cin >> q;
    while (q--)
    {
        cin >> op >> l >> r;
        if (op == 1)
        {
            cin >> k;
            cnt = 0;
            for (int i = l - 1; i < r; i++)
            {
                if (v[i] == k)
                    cnt++;
            }
            cout << cnt << '\n';
        }
        else
        {
            for (int i = l - 1; i < r; i++)
                v[i] = 0;
        }
    }

    return 0;
}