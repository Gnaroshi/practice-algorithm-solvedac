// problem: 오버플로우와 모듈러
// id: 15818
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m, a, t;
    cin >> n >> m >> a;
    a %= m;
    for (int i = 1; i < n; i++)
    {
        cin >> t;
        t %= m;
        a *= t;
        a %= m;
    }
    cout << a;

    return 0;
}