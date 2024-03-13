// problem: 이진수 덧셈
// id: 2729
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
        string a, b, ret = "";
        cin >> a >> b;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int la = a.length(), lb = b.length(), mx = max(la, lb);
        for (int i = la; i < mx; i++)
            a += '0';
        for (int i = lb; i < mx; i++)
            b += '0';
        bool cr = false;
        for (int i = 0; i < mx; i++)
        {
            if (a[i] == b[i] && a[i] == '1')
            {
                if (cr)
                    ret += '1';
                else
                    ret += '0';
                cr = true;
            }
            else if ((a[i] == '1' || b[i] == '1') && cr)
                ret += '0';
            else if (a[i] == '1' || b[i] == '1')
                ret += '1';
            else if (cr)
                ret += '1', cr = false;
            else
                ret += '0';
        }
        if (cr)
            ret += '1';
        reverse(ret.begin(), ret.end());
        bool chk = false;
        for (auto i : ret)
        {
            if (i == '1')
                chk = true;
            if (chk)
                cout << i;
        }
        if (!chk)
            cout << 0;
        cout << '\n';
    }

    return 0;
}
