// problem: Golden
// id: 10187
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        double a, b;
        cin >> a >> b;
        if (1.61803399 * 0.99 <= a / b && a / b <= 1.61803399 * 1.01)
            cout << "golden\n";
        else
            cout << "not\n";
    }

    return 0;
}