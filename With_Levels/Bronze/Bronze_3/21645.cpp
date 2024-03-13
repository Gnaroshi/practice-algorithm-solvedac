// problem: Ролевая игра
// id: 21645
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;
    int q = m / k, r = m % k;
    if (m >= k)
        cout << (m / k + k - 1) * n;
    else
        cout << m * n;

    return 0;
}