// problem: Matches
// id: 13222
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double n, w, h, d;
    cin >> n >> w >> h;
    d = sqrt(w * w + h * h);
    while (n--)
    {
        double t;
        cin >> t;
        if (t <= d)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}