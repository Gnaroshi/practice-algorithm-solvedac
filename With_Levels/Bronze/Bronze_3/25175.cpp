// problem: 두~~부 두부 두부
// id: 25175
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;
    k -= 3;
    k %= n;
    int t = (m + k - 1 + n) % n + 1;
    cout << t;

    return 0;
}