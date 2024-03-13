// problem: Betting
// id: 24751
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a;
    cin >> a;
    cout.precision(10);

    cout << 100.0 / a << '\n'
         << 100.0 / (100 - a);

    return 0;
}