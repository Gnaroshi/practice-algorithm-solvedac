// problem: 모기곱셈
// id: 6609
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, p, l, e, r, s, n;
    while (cin >> m >> p >> l >> e >> r >> s >> n)
    {
        int a, b, c;
        for (int i = 0; i < n; i++)
        {
            a = m * e;
            b = l / r;
            c = p / s;
            m = c;
            p = b;
            l = a;
        }
        cout << m << '\n';
    }
    return 0;
}