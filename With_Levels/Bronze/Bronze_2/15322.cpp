// problem: Košnja
// id: 15322
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
        int n, m, mn;
        cin >> n >> m;
        mn = min(n, m);
        cout << (mn - 1) * 2 << '\n';
    }

    return 0;
}