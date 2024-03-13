// problem: 청정수열 (Easy)
// id: 25176
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    long long ans = 1;
    for (int i = 1; i <= n; i++)
        ans *= i;
    cout << ans;

    return 0;
}