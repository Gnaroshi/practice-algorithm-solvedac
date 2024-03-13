// problem: Increasing Substring
// id: 23003
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
        int n, cur = 1;
        char bef;
        string s;
        cin >> n >> s;
        cout << 1;
        if (n == 1)
            cout << '\n';
        else
        {
            bef = s[0];
            for (int i = 1; i < n; i++)
            {
                if (bef < s[i])
                {
                    cur++;
                    cout << ' ' << cur;
                }
                else
                {
                    cur = 1;
                    cout << ' ' << cur;
                }
                bef = s[i];
            }
            cout << "\n";
        }
    }

    return 0;
}