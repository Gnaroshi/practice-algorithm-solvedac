// problem: Let’s Portmanteau
// id: 30217
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b, vw = "aeiou";
    cin >> a >> b;
    bool ca = false, cb = false;
    int la = a.length() - 1, lb = 0, ia = a.length(), ib = b.length();
    for (int i = 1; i < ia; i++)
    {
        if (vw.find(a[i]) != string::npos)
        {
            la = i;
            ca = true;
            break;
        }
    }
    for (int i = ib - 2; i >= 0; i--)
    {
        if (vw.find(b[i]) != string::npos)
        {
            lb = i;
            cb = true;
            break;
        }
    }
    if (!ca && !cb)
        cout << a << 'o' << b;
    else if (!cb)
        cout << a.substr(0, la + 1) << b;
    else if (!ca)
        cout << a << b.substr(lb, ib - lb);
    else
        cout << a.substr(0, la) << b.substr(lb, ib - lb);

    return 0;
}
