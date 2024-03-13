// problem: Bunnies
// id: 26529
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long f[46];
    f[0] = f[1] = 1;
    for (int i = 2; i < 46; i++)
        f[i] = f[i - 1] + f[i - 2];
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        cout << f[n] << '\n';
    }

    return 0;
}