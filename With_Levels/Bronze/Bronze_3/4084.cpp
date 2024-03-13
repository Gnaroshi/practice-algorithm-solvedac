// problem: Viva la Diferencia
// id: 4084
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b, c, d;
    long long na, nb, nc, nd;
    while (true)
    {
        cin >> a >> b >> c >> d;
        if (a + b + c + d == 0)
            break;
        int cnt = 1;
        if (a == b && b == c && c == d)
        {
            cout << 0 << '\n';
            continue;
        }
        while (true)
        {
            na = abs(a - b);
            nb = abs(c - b);
            nc = abs(c - d);
            nd = abs(a - d);
            if (na == nb && nb == nc && nc == nd)
            {
                cout << cnt << '\n';
                break;
            }
            cnt++;
            a = na;
            b = nb;
            c = nc;
            d = nd;
        }
    }

    return 0;
}