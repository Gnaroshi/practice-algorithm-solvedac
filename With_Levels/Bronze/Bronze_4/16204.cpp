#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;

    // m o, n-m x
    // k o, n-k x
    if (m < k)
    {
        int temp;
        temp = m;
        m = k;
        k = temp;
    }

    cout << k + n - m << '\n';

    return 0;
}