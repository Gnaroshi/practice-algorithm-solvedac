// problem: 오르막
// id: 14910
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int bef, cur;
    bool chk = true;
    cin >> bef;
    while (cin >> cur)
    {
        if (!chk)
            continue;
        if (cur < bef)
            chk = false;
        bef = cur;
    }
    cout << (chk ? "Good" : "Bad");

    return 0;
}