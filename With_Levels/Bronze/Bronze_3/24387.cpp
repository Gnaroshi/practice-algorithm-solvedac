// problem: ИЗЛОЖЕНИЕ НА ПЧЕЛЕН МЕД
// id: 24387
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a[3], b[3];
    for (int i = 0; i < 3; i++)
        cin >> a[i];
    for (int i = 0; i < 3; i++)
        cin >> b[i];
    sort(a, a + 3);
    sort(b, b + 3);
    long long ans = 0;
    for (int i = 0; i < 3; i++)
        ans += a[i] * b[i];
    cout << ans;

    return 0;
}