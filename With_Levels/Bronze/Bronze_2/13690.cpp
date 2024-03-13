// problem: Jogo do Bicho
// id: 13690
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double v;
    int n, m;
    cout << fixed;
    cout.precision(2);
    while (true)
    {
        cin >> v >> n >> m;
        if (v + n + m == 0)
            break;
        string a, b;
        a = to_string(n);
        b = to_string(m);
        int ai = a.length(), al;
        int bi = b.length(), bl;
        double mx = 0;
        if (ai < 4)
        {
            for (int i = 0; i < 4 - ai; i++)
                a.insert(a.begin(), '0');
            ai = 4;
        }
        if (bi < 4)
        {
            for (int i = 0; i < 4 - bi; i++)
                b.insert(b.begin(), '0');
            bi = 4;
        }
        if (a.substr(ai - 4, 4) == b.substr(bi - 4, 4))
            mx = max(mx, v * 3000);
        if (a.substr(ai - 3, 3) == b.substr(bi - 3, 3))
            mx = max(mx, v * 500);
        if (a.substr(ai - 2, 2) == b.substr(bi - 2, 2))
            mx = max(mx, v * 50);
        al = stoi(a.substr(ai - 2, 2));
        bl = stoi(b.substr(bi - 2, 2));
        if (al == 0)
            al = 100;
        if (bl == 0)
            bl = 100;
        for (int i = 1; i <= 97; i += 4)
        {
            if ((al >= i && al <= i + 3) && (bl >= i && bl <= i + 3))
            {
                mx = max(mx, v * 16);
                break;
            }
        }
        cout << mx << '\n';
    }

    return 0;
}