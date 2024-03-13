// problem: Lots of Liquid
// id: 25991
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    double ans = 0;
    for (int i = 0; i < n; i++)
    {
        double t;
        cin >> t;
        ans += t * t * t;
    }
    cout.precision(9);
    cout << pow(ans, 1.0 / 3.0);

    return 0;
}