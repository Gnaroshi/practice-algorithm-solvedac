// problem: Brownies vs. Candies vs. Cookies
// id: 25934
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
        cout << "Practice #" << tcc << ": ";
        int s, b, m, n;
        cin >> s >> b >> m;
        cout << s << ' ' << b << '\n';
        for (int i = 0; i < m; i++)
        {
            cin >> n;
            while (b <= n)
                b = b << 1;
            b -= n;
            cout << n << ' ' << b << '\n';
        }
        cout << '\n';
    }

    return 0;
}