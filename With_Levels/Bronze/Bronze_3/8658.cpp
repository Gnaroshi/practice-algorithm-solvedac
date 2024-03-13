// problem: Liczba
// id: 8658
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mx, mn;
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        if (n % i != 0)
        {
            mn = i;
            break;
        }
    }

    for (int i = n - 1; i > 1; i--)
    {
        if (n % i != 0)
        {
            mx = i;
            break;
        }
    }
    cout << mn << ' ' << mx;

    return 0;
}