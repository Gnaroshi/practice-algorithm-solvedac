// problem: ICPC
// id: 14004
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b, c, d, ans = 0;
    cin >> a >> b >> c >> d;
    cout << (c + d) / (a - b);

    return 0;
}