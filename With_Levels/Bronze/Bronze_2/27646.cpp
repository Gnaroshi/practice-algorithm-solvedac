// problem: Judicious cuts (Easy)
// id: 27646
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
        int n;
        cin >> n;
        cout << n - 1 << '\n';
        for (int i = 1; i < n; i++)
            cout << "0 " << i << '\n';
    }

    return 0;
}