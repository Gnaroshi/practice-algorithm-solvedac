// problem: Dice
// id: 5770
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p, s, n, d1, d2, cur;
    while (true)
    {
        cin >> p >> s;
        if (p + s == 0)
            break;

        vector<int> v(p), tr(3);
        vector<bool> vc(p);
        fill(v.begin(), v.end(), 0);
        fill(vc.begin(), vc.end(), 1);
        for (int i = 0; i < 3; i++)
            cin >> tr[i];
        cin >> n;
        cur = 0;
        while (n--)
        {

            cin >> d1 >> d2;
            v[cur] += (d1 + d2);
            if (v[cur] > s)
            {
                cout << cur + 1 << '\n';
                break;
            }
            for (auto i : tr)
            {
                if (v[cur] == i)
                {
                    vc[cur] = false;
                    break;
                }
            }
            cur = (cur + 1) % p;
            while (!vc[cur])
            {
                vc[cur] = true;
                cur = (cur + 1) % p;
            }
        }
    }

    return 0;
}