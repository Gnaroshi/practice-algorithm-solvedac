// problem: ОБЛЕКЛА НА УЧЕБНИЦИ
// id: 24295
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int bl, br, cal, car, cbl, cbr, ta, tb;
    cin >> ta >> tb;
    bl = ta * 10 + tb;
    cin >> ta >> tb;
    br = ta * 10 + tb;
    cin >> ta >> tb;
    cal = ta * 10 + tb;
    cin >> ta >> tb;
    car = ta * 10 + tb;
    cin >> ta >> tb;
    cbl = ta * 10 + tb;
    cin >> ta >> tb;
    cbr = ta * 10 + tb;
    if (bl > br)
        swap(bl, br);
    if (cal > car)
        swap(cal, car);
    if (cbl > cbr)
        swap(cbl, cbr);
    bool a = false, b = false;
    if (bl + 10 <= cal && br <= car)
        a = true;
    if (bl + 10 <= cbl && br <= cbr)
        b = true;
    if (a && b)
    {
        if (cal < cbl)
            cout << 1 << '\n'
                 << cal / 10 << '.' << cal % 10 << ' ' << car / 10 << '.' << car % 10;
        else
            cout << 2 << '\n'
                 << cbl / 10 << '.' << cbl % 10 << ' ' << cbr / 10 << '.' << cbr % 10;
    }
    else if (a)
        cout << 1 << '\n'
             << cal / 10 << '.' << cal % 10 << ' ' << car / 10 << '.' << car % 10;
    else if (b)
        cout << 2 << '\n'
             << cbl / 10 << '.' << cbl % 10 << ' ' << cbr / 10 << '.' << cbr % 10;
    else
        cout << 0;

    return 0;
}