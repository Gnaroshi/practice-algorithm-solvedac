// problem: Recipes
// id: 5133
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
        cout << "Data Set " << tcc << ":\n";

        int n, c;
        cin >> n >> c;
        while (n--)
        {
            int w, a, d, g;
            string s;
            cin >> w >> s;
            a = s[0] - '0', d = s[2] - '0';
            w *= c;
            a *= c;
            g = __gcd(a, d);
            a /= g, d /= g;
            if (a % d == 0)
            {
                w += a / d;
                cout << w << '\n';
            }
            else
            {
                w += a / d, a -= (a / d) * d;
                cout << w << ' ' << a << '/' << d << '\n';
            }
        }

        cout << '\n';
    }

    return 0;
}