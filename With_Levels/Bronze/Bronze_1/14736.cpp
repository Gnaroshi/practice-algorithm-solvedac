// problem: Coke Challenge
// id: 14736
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, a, mn = 0x3f3f3f3f, t, s;
    cin >> n >> k >> a;
    k /= a;
    for (int i = 0; i < n; i++)
    {
        cin >> t >> s;
        mn = min(mn, (k / t * (t + s)) + k % t + ((k % t == 0) ? -s : 0));
    }
    cout << mn << '\n';

    return 0;
}