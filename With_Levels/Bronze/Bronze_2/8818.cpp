// problem: Deski
// id: 8818
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll k;
        cin >> k;
        string s = "", t = "";
        while (k > 0)
        {
            s += char('0' + k % 2);
            k /= 2;
        }
        bool chk = false;
        for (auto i : s)
        {
            if (i == '1')
                chk = true;
            if (chk)
                t += i;
        }
        if (t.length() == 1)
            cout << 0 << '\n';
        else
            cout << t.length() << '\n';
    }

    return 0;
}