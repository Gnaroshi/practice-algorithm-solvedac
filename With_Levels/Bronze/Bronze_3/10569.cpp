// problem: 다면체
// id: 10569
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
        int v, e;
        cin >> v >> e;
        cout << 2 - v + e << '\n';
    }

    return 0;
}