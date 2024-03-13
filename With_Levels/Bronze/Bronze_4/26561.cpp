// problem: Population
// id: 26561
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
        ll p, t;
        cin >> p >> t;
        for (int i = 1; i <= t; i++)
        {
            if (i % 7 == 0)
                p--;
            if (i % 4 == 0)
                p++;
        }
        cout << p << '\n';
    }

    return 0;
}