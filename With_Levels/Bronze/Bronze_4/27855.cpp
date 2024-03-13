// problem: Cornhole
// id: 27855
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h1, b1, h2, b2;
    cin >> h1 >> b1 >> h2 >> b2;
    int a = h1 * 3 + b1;
    int b = h2 * 3 + b2;
    if (a > b)
        cout << 1 << ' ' << a - b;
    else if (a < b)
        cout << 2 << ' ' << b - a;
    else
        cout << "NO SCORE";

    return 0;
}