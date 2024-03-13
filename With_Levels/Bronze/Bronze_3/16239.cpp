// problem: Nadan
// id: 16239
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    int t = 0;
    for (int i = 1; i <= k - 1; i++)
    {
        cout << i << '\n';
        t += i;
    }
    cout << n - t;

    return 0;
}