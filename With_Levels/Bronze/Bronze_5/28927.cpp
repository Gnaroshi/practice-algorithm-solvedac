// problem: Киноманы
// id: 28927
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, t, e, f;
    cin >> t >> e >> f;
    a = 3 * t + 20 * e + 120 * f;
    cin >> t >> e >> f;
    a -= 3 * t + 20 * e + 120 * f;
    if (a > 0)
        cout << "Max";
    else if (a < 0)
        cout << "Mel";
    else
        cout << "Draw";

    return 0;
}