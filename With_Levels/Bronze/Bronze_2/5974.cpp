// problem: Lucky Charms
// id: 5974
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, c, n, s, p;
    cin >> l >> c >> n;
    for (int i = 0; i < c; i++)
    {
        cin >> s >> p;
        cout << abs(p - n) + s << '\n';
    }

    return 0;
}