// problem: Fastestest Function
// id: 25985
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, aa, b, bb;
    cin >> a >> b;
    aa = 100 - a;
    bb = 100 - b;
    cout << fixed;
    cout.precision(7);
    cout << a / (b * aa / (bb));
    return 0;
}