// problem: Federal Voting Age
// id: 6845
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
        int y, m, d;
        cin >> y >> m >> d;
        int cnt = 2007 - y - 1;
        if (m <= 2 && d <= 27)
            cnt++;
        if (cnt >= 18)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}