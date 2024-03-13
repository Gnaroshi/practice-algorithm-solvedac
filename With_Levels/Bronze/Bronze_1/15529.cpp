// problem: Best Matched Pair
// id: 15529
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mx = -1, t, bef, l;
    cin >> n;
    vector<int> v(n);
    string s;
    bool chk;
    for (auto &i : v)
        cin >> i;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            t = v[i] * v[j];
            s = to_string(t);
            bef = s[0], l = s.length();
            chk = true;
            for (int k = 1; k < l; k++)
            {
                if (s[k] - 1 != bef)
                {
                    chk = false;
                    break;
                }
                bef = s[k];
            }
            if (chk)
                mx = max(mx, t);
        }
    }
    cout << mx;

    return 0;
}