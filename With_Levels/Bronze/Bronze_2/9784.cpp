// problem: Boiled Eggs
// id: 9784
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
        int n, p, q, c = 0, g = 0;
        cin >> n >> p >> q;
        vector<int> e(n);
        for (auto &i : e)
            cin >> i;
        sort(e.begin(), e.end());
        for (int i = 0; i < n; i++)
        {
            if (g + e[i] <= q && c < p)
            {
                g += e[i];
                c++;
            }
            else
                break;
        }

        cout << "Case " << tcc << ": " << c << '\n';
    }

    return 0;
}