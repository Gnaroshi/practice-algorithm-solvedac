// problem: 알고리즘 수업 - 알고리즘의 수행 시간 6
// id: 24267
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;

    cout << n * (n - 1) * (n - 2) / 6 << '\n'
         << 3;

    return 0;
}