// problem: Лифт
// id: 27262
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, a, b;
    cin >> n >> k >> a >> b;
    cout << (k - 1) * b + (n - 1) * b << ' ' << (n - 1) * a;

    return 0;
}