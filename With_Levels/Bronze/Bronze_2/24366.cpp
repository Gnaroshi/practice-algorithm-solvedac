// problem: КЛЕТКИ
// id: 24366
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    cout << k - 1 - (n - k) % (k - 1);

    return 0;
}