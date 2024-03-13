// problem: Schronisko
// id: 8760
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
        int w, k;
        cin >> w >> k;
        cout << w * k / 2 << '\n';
    }

    return 0;
}