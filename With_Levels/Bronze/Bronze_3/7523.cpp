// problem: Gauß
// id: 7523
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        long long n, m;
        cin >> n >> m;
        cout << "Scenario #" << i << ":\n"
             << (n + m) * (m - n + 1) / 2 << '\n';
        if (i != tc)
            cout << '\n';
    }

    return 0;
}