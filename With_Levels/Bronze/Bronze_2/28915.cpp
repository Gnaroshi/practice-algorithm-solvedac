// problem: Книжная полка
// id: 28915
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double h, r, t;
    cin >> h >> r;
    int f = int(sqrt(h * h * 0.75));
    cout << ((int(r) % f) ? 1 : 0) + int(r) / f - 1;

    return 0;
}