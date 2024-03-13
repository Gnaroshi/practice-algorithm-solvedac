// problem: Fergusonball Ratings
// id: 24569
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc, cnt = 0;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a * 5 - b * 3 > 40)
            cnt++;
    }
    cout << cnt;
    if (cnt == tc)
        cout << '+';

    return 0;
}
