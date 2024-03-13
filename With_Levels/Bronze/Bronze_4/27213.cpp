// problem: Граничные клетки
// id: 27213
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;
    cout << (m * n) - (max(0, (m - 2)) * max(0, (n - 2)));

    return 0;
}