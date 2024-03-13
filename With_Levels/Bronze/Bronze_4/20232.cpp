// problem: Archivist
// id: 20232
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    n -= 1995;
    if (n == 0 || n == 3 || n == 4 || (6 <= n && n <= 10) || (14 <= n && n < 18) ||
        (19 <= n && n <= 22) || n == 24)
        cout << "ITMO";
    else if (n == 11)
        cout << "PetrSU, ITMO";
    else
        cout << "SPbSU";

    return 0;
}