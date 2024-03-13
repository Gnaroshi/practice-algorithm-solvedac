// problem: Badminton
// id: 13216
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int a = 0, b = 0, ca = 0, cb = 0;
    for (auto i : s)
    {
        if (i == 'A')
            a++;
        else
            b++;
        if (a == 21)
        {
            ca++;
            cout << a << '-' << b << '\n';
            a = b = 0;
        }
        else if (b == 21)
        {
            cb++;
            cout << a << '-' << b << '\n';
            a = b = 0;
        }
    }
    if (ca > cb)
        cout << "A";
    else
        cout << "B";

    return 0;
}