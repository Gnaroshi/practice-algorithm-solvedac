#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll tl, tw, el, ew;
        cin >> tl >> tw >> el >> ew;
        if (tl * tw > el * ew)
            cout << "TelecomParisTech\n";
        else if (tl * tw == el * ew)
            cout << "Tie\n";
        else
            cout << "Eurecom\n";
    }

    return 0;
}