// problem: Perfect Harmony (Small)
// id: 12495
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
        cout << "Case #" << tcc << ": ";
        int n, l, h;
        cin >> n >> l >> h;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        bool chk = false;
        for (int i = l; i <= h; i++)
        {
            bool fnd = true;
            for (auto j : v)
            {
                if (j % i != 0 && i % j != 0)
                {
                    fnd = false;
                    break;
                }
            }
            if (fnd)
            {
                chk = true;
                cout << i << '\n';
                break;
            }
        }
        if (!chk)
            cout << "NO\n";
    }

    return 0;
}