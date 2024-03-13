// problem: Teenage Mutant
// id: 16847
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
        int n, k, ans = 0;
        string s, t;
        cin >> n >> k >> s;
        bool *chk = (bool *)malloc(sizeof(bool) * k);
        fill(chk, chk + k, true);
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            for (int j = 0; j < k; j++)
            {
                if (s[j] == t[j])
                    chk[j] = false;
            }
        }
        for (int i = 0; i < k; i++)
            ans += chk[i];
        cout << ans << '/' << k << "\n\n";
    }

    return 0;
}