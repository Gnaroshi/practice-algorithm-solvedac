// problem: K-Goodness String
// id: 22999
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
        int n, k, hn, cnt = 0;
        string s;
        cin >> n >> k >> s;
        hn = n / 2;
        for (int i = 0; i < hn; i++)
        {
            if (s[i] != s[n - i - 1])
                cnt++;
        }
        cout << abs(cnt - k) << '\n';
    }

    return 0;
}