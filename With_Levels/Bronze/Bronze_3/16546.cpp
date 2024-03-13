// problem: Missing Runners
// id: 16546
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, cnt = 0;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> t;
        cnt += t;
    }
    cout << n * (n + 1) / 2 - cnt;

    return 0;
}