// problem: Curve Speed
// id: 21167
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b;
    while (cin >> a >> b)
    {
        cout << int(round(sqrt((a * (b + 0.16)) / 0.067))) << '\n';
    }

    return 0;
}