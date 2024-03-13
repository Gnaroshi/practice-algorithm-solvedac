// problem: Rectangle and Squares
// id: 13035
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll a, b, c, ta, tb;
        cin >> ta >> tb >> c;
        a = ta * tb, b = c * c;
        ta = a / b, tb = a % b;
        if (b < tb * 2)
            ta++;
        if (ta == 0)
            cout << b << '\n';
        else
            cout << ta * b << '\n';
    }

    return 0;
}