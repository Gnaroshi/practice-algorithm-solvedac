// problem: Stopwatch
// id: 21197
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int ans = 0;
    bool pr = false;
    int bef = 0;
    while (n--)
    {
        int t;
        cin >> t;
        if (pr)
            ans += t - bef;
        pr = !pr;
        bef = t;
    }
    if (pr)
        cout << "still running";
    else
        cout << ans;

    return 0;
}