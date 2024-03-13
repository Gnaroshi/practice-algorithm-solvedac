// problem: Speed Reading
// id: 6139
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    while (k--)
    {
        int s, t, r, c;
        cin >> s >> t >> r;
        c = n / s + (n % s ? 1 : 0);
        if (c % t)
            cout << c / t * t + c / t * r + c % t;
        else
            cout << c / t * t + max(0, c / t - 1) * r + c % t;
        cout << '\n';
    }

    return 0;
}