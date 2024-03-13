// problem: 모형결정
// id: 18127
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b;
    cin >> a >> b;
    long long ans = 1;
    long long t = 1;
    for (int i = 0; i < b; i++)
    {
        t += a - 2;
        ans += t;
    }
    cout << ans;

    return 0;
}