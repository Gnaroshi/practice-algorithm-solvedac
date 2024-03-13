// problem: Cool Numbers
// id: 6815
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, ans = 0;
    cin >> a >> b;

    for (long long i = 1; i < 100; i++)
    {
        long long t = i * i * i * i * i * i;
        if (t >= a && t <= b)
            ans++;
    }
    cout << ans;

    return 0;
}