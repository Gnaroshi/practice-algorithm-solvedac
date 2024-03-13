// problem: Fegla and the Bed Bugs
// id: 9349
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
        cout << (n - k) / (k - 1) << '\n';
    }

    return 0;
}