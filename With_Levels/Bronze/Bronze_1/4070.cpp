// problem: Mahershalalhashbaz, Nebuchadnezzar, and Billy Bob Benjamin Go to the Regionals
// id: 4070
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, tcc = 1, ls;
    while (true)
    {
        cin >> n >> k;
        if (n + k == 0)
            break;
        cout << "Case " << tcc++ << ": ";
        vector<int> v(n + 1);
        string s;
        v[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> s;
            v[i] = s.length();
        }
        sort(v.begin() + 1, v.end());
        for (int i = 1; i <= n; i++)
            v[i] += v[i - 1];

        bool chk = true;
        for (int i = 1; i <= n; i += k)
        {
            ls = (v[i + k - 1] - v[i - 1]) / k;
            for (int j = i; j < i + k; j++)
            {
                if (abs(ls - (v[j] - v[j - 1])) > 2)
                {
                    chk = false;
                    break;
                }
            }
            if (!chk)
                break;
        }
        cout << (chk ? "yes\n\n" : "no\n\n");
    }

    return 0;
}