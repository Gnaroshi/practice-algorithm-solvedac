// problem: 이번학기 평점은 몇점?
// id: 2755
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    double sa = 0, sb = 0, a;
    string s, b;
    cin >> tc;
    while (tc--)
    {
        cin >> s >> a >> b;
        sa += a;
        if (b[0] == 'F')
            continue;
        sb += (4 - (b[0] - 'A')) * a;
        if (b[1] == '+')
            sb += 0.3 * a;
        else if (b[1] == '-')
            sb -= 0.3 * a;
    }
    cout << fixed;
    cout.precision(2);
    cout << round(sb / sa * 100) / 100;

    return 0;
}