// problem: Złodziejki
// id: 8836
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
        int n, k;
        cin >> n >> k;
        cout << k - 2 - (n + k - 3) % (k - 1) << '\n';
    }

    return 0;
}