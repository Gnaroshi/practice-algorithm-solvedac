#include <bits/stdc++.h>
using namespace std;

string sd[] = {"saturday", "sunday", "monday", "tuesday", "wednesday", "thursday", "friday"};
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int y, m, d;
    cin >> y >> m >> d;
    if (m == 1 || m == 2)
        m += 12, y--;
    cout << sd[(d + (13 * (m + 1)) / 5 + y + y / 4 - y / 100 + y / 400) % 7];
    // 첼러의 합동식

    return 0;
}