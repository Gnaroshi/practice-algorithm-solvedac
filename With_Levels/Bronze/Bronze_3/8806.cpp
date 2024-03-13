// problem: Papier kamień nożyczki
// id: 8806
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double p1, s1, r1, p2, s2, r2, a;
    int tc;
    cin >> tc;
    while (tc--)
    {
        cin >> p1 >> s1 >> r1 >> p2 >> s2 >> r2;
        a = 0;
        a += p1 * r2 + s1 * p2 + r1 * s2;
        a -= p1 * s2 + s1 * r2 + r1 * p2;
        if (a < 0)
            cout << "ADAM";
        else if (a == 0)
            cout << "=";
        else
            cout << "GOSIA";
        cout << '\n';
    }
    return 0;
}