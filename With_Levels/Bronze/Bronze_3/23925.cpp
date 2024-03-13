// problem: Retype
// id: 23925
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
        cout << "Case #" << i << ": ";
        long long n, k, s;
        cin >> n >> k >> s;
        cout << k + min(n, 2 * (k - s) + (n - k)) << "\n";
    }

    return 0;
}