// problem: Pyramidbygge
// id: 26941
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int ans = 0;
    int c = 1;
    while (true)
    {
        if (n >= c * c)
            n -= c * c;
        else
            break;
        ans++;
        c += 2;
    }
    cout << ans;

    return 0;
}