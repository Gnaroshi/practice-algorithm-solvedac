// problem: Square
// id: 14545
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
        int n;
        cin >> n;
        cout << ((n * (n + 1)) / 2 * (2 * n + 1) / 3) << '\n';
    }

    return 0;
}