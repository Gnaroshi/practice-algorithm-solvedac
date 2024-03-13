// problem: Exam
// id: 26563
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int k, tot, iter, ans = 0;
        string a, b;
        cin >> k >> a >> b;
        tot = iter = a.length();
        tot -= k;
        for (int i = 0; i < iter; i++)
        {
            if (a[i] == b[i])
            {
                if (k > 0)
                    k--, ans++;
            }
            else
            {
                if (tot > 0)
                    tot--, ans++;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}