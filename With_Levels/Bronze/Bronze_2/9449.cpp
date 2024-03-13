// problem: Garage
// id: 9449
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << ((a / c + 1) / 2) * ((b / d + 1) / 2);

    return 0;
}