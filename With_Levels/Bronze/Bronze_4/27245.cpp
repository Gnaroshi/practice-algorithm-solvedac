// problem: Комната
// id: 27245
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int w, l, h;
    cin >> w >> l >> h;
    int r = max(w, l);
    int c = min(w, l);
    if ((c >= h * 2) && (c * 2 >= r))
        cout << "good";
    else
        cout << "bad";

    return 0;
}