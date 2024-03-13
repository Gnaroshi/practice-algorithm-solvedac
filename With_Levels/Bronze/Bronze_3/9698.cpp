// problem: SAHUR & IMSA’
// id: 9698
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        cout << "Case #" << i << ": ";
        int h, m;
        cin >> h >> m;
        m -= 45;
        if (m < 0)
        {
            h--;
            m += 60;
        }
        if (h < 0)
        {
            h += 24;
        }
        cout << h << ' ' << m << '\n';
    }

    return 0;
}