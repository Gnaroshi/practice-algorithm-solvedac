// problem: Rating Increase
// id:
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
        string s, a, b;
        cin >> s;
        int ia, ib, iter = s.length();
        bool chk = false;
        for (int i = 1; i < iter; i++)
        {
            a = s.substr(0, i);
            b = s.substr(i, iter - i);
            if (a[0] == '0' || b[0] == '0')
                continue;
            ia = stoi(a), ib = stoi(b);
            if (ia < ib)
            {
                chk = true;
                break;
            }
        }
        if (chk)
            cout << ia << ' ' << ib << '\n';
        else
            cout << -1 << '\n';
    }

    return 0;
}