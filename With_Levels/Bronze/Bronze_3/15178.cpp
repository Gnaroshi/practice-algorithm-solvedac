// problem: Angles
// id: 15178
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
        int a, b, c;
        cin >> a >> b >> c;
        cout << a << ' ' << b << ' ' << c;

        if (a + b + c == 180)
            cout << " Seems OK\n";
        else
            cout << " Check\n";
    }

    return 0;
}