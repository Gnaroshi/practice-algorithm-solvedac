// problem: HJS
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l = 0;
    cin >> n;
    string a, b, c;
    char fa, fb, fc;
    cin >> a >> b >> c;
    if (a == b || b == c || c == a)
    {
        cout << "Hmm...";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i] && b[i] == c[i])
            continue;
        else
        {
            l = i;
            break;
        }
    }
    a = a.substr(l), b = b.substr(l), c = c.substr(l);
    fa = a[0], fb = b[0], fc = c[0];
    n -= l;
    if (fa == fb && fb != fc)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                l = i;
                break;
            }
        }
        if (a[l] == fc && b[l] == fa)
            cout << "Hmm...";
        else
            cout << "HJS! HJS! HJS!";
    }
    else if (fa != fb && fb == fc)
    {
        for (int i = 0; i < n; i++)
        {
            if (b[i] != c[i])
            {
                l = i;
                break;
            }
        }
        if (b[l] == fb && c[l] == fa)
            cout << "Hmm...";
        else
            cout << "HJS! HJS! HJS!";
    }
    else if (fa != fb && fa == fc)
        cout << "Hmm...";
    else
        cout << "HJS! HJS! HJS!";

    return 0;
}