// problem: Монетки
// id: 21420
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, a = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        a += t;
    }
    cout << min(n - a, a);

    return 0;
}