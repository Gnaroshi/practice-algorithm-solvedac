// problem: Namnsdag
// id: 21285
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string mf, s;
    int n;
    cin >> mf >> n;
    bool chk = false;
    int i;
    for (i = 1; i <= n; i++)
    {
        cin >> s;
        if (chk)
            continue;
        if (s.length() == mf.length())
        {
            int d = 0, iter = min(s.length(), mf.length());
            for (int i = 0; i < iter; i++)
            {
                if (s[i] != mf[i])
                    d++;
            }
            if (d < 2)
            {
                cout << i;
                chk = true;
            }
        }
    }
    if (!chk)
        cout << i;

    return 0;
}