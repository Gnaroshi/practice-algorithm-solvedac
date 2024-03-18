// problem: Hammasrattad
// id: 7132
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n, g;
    cin >> m >> n;
    set<pair<int, int>> s;
    for (int i = m; i <= n; i++)
    {
        for (int j = m; j <= n; j++)
        {
            g = __gcd(i, j);
            s.insert({i / g, j / g});
            s.insert({j / g, i / g});
        }
    }

    cout << s.size();

    return 0;
}