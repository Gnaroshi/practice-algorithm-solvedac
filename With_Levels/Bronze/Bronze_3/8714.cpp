// problem: Monety
// id: 8714
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, a, b;
    cin >> n;
    a = b = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t)
            a++;
        else
            b++;
    }
    cout << min(a, b);

    return 0;
}
