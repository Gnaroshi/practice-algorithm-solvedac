// problem: Sum Kind of Problem
// id: 11522
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
        cout << k << ' ' << n * (n + 1) / 2 << ' ' << n * (1 + (n - 1)) << ' ' << n * (2 + (n - 1)) << '\n';
    }

    return 0;
}