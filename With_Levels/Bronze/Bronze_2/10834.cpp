// problem: 벨트
// id: 10834
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cw = 0, c;
    double r = 1, a, b;
    int tc;
    cin >> tc;
    while (tc--)
    {
        cin >> a >> b >> c;
        cw = (cw + c) % 2;
        r *= b / a;
    }
    cout << cw << ' ' << int(round(r));

    return 0;
}