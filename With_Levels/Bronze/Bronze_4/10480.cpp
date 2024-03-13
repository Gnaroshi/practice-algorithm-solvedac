// problem: Oddities
// id: 10480
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
        int a;
        cin >> a;
        cout << a << " is ";
        if (a % 2 == 0)
            cout << "even";
        else
            cout << "odd ";
        cout << '\n';
    }

    return 0;
}