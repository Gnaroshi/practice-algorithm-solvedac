// problem: Number Fun
// id: 24783
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
        double a, b, c;
        cin >> a >> b >> c;
        bool chk = false;
        if (a + b == c || a - b == c || a * b == c || a / b == c)
            chk = true;
        swap(a, b);
        if (a + b == c || a - b == c || a * b == c || a / b == c)
            chk = true;
        if (chk)
            cout << "Possible\n";
        else
            cout << "Impossible\n";
    }

    return 0;
}