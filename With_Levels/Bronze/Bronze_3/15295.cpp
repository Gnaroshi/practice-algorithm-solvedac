// problem: Chanukah Challenge
// id: 15295
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int k, n;
        cin >> k >> n;
        cout << k << ' ' << n * (n + 1) / 2 + n << '\n';
    }

    return 0;
}