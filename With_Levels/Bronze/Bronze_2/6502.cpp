// problem: 동혁 피자
// id: 6502
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt = 1;
    double r, w, l;
    while (true)
    {
        cin >> r;
        if (!r)
            break;
        cin >> w >> l;
        cout << "Pizza " << cnt++;
        if (w * w + l * l <= 4 * r * r)
            cout << " fits on the table.\n";
        else
            cout << " does not fit on the table.\n";
    }

    return 0;
}