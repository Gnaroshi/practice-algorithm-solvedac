// problem: Is It Even?
// id: 24927
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, x;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        while (x % 2 == 0)
        {
            x /= 2;
            k--;
        }
    }
    cout << (k <= 0);

    return 0;
}