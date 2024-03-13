// problem: Farma
// id: 26741
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;
    cout << 2 * x - y / 2 << ' ' << (y - 2 * x) / 2;

    return 0;
}