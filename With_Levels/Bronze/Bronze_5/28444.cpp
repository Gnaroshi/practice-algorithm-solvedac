// problem: HI-ARC=?
// id: 28444
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, i, a, r, c;
    cin >> h >> i >> a >> r >> c;
    cout << h * i - a * r * c;
    return 0;
}