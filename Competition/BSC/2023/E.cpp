// problem: E번 - 그래서 님 푼 문제 수가?
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k, mn, mx, t;
    cin >> n >> m >> k;

    if (m * k >= n)
        mn = 0;
    else
        mn = n - m * k;
    mx = n - m * k + m - 1;
    cout << mn << ' ' << mx;

    return 0;
}