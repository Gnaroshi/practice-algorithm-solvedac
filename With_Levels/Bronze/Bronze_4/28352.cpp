// problem: 10!
// id: 28352
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t = 1, n;
    cin >> n;
    for (long long i = 1; i <= n; i++)
        t *= i;
    cout << t / 7 / 24 / 60 / 60;

    return 0;
}