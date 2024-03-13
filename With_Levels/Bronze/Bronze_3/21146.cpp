// problem: Rating Problems
// id: 21146
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    double ans = 0;
    for (int i = 0; i < k; i++)
    {
        double t;
        cin >> t;
        ans += t;
    }
    cout << (ans - (n - k) * 3.0) / double(n) << ' ' << (ans + (n - k) * 3.0) / double(n);

    return 0;
}