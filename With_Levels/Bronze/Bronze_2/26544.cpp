// problem: Histogram Fencing
// id: 26544
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
        long long n, a = 0, b = 0, t;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            a += t;
        }
        a *= 2;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            a += abs(b - t);
            b = t;
        }
        cout << a + b << '\n';
    }

    return 0;
}