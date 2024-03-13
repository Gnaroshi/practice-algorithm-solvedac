// problem: Хоккейные ворота
// id: 29680
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double h, w, w1, w2;
    cin >> h >> w >> w1 >> w2;
    cout << fixed;
    cout.precision(6);
    cout << (sqrt((w2 - w1) * (w2 - w1) + h * h)) * w + w1 * w + (w1 + w2) * h;

    return 0;
}