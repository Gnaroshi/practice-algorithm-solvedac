// problem: e 계산
// id: 6376
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double t = 0.5, ans = 2.5;
    cout << "n e\n";
    cout << "- -----------\n";
    cout << "0 1\n";
    cout << "1 2\n";
    cout << "2 2.5\n";
    cout << fixed;
    cout.precision(9);
    for (int i = 3; i <= 9; i++)
    {
        t /= i;
        ans += t;
        cout << i << ' ' << ans << '\n';
    }

    return 0;
}