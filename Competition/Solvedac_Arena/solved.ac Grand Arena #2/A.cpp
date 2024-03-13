// problem: A번 - 세제곱의 합
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    cout << n * (n + 1) / 2 << '\n';
    cout << (n * (n + 1) / 2) * (n * (n + 1) / 2) << '\n';
    cout << (n * (n + 1) / 2) * (n * (n + 1) / 2);

    return 0;
}