// problem: Sums
// id: 13073
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, s1, s2, s3;
        cin >> n;
        s1 = n * (n + 1) / 2;
        s2 = n * (2 + (n - 1) * 2) / 2;
        s3 = n * (4 + (n - 1) * 2) / 2;
        cout << s1 << ' ' << s2 << ' ' << s3 << '\n';
    }

    return 0;
}