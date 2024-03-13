#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h1, m1, s1;
    int h2, m2, s2;
    char c;

    cin >> h1 >> c >> m1 >> c >> s1;
    cin >> h2 >> c >> m2 >> c >> s2;

    int t1, t2;
    t1 = h1 * 3600 + m1 * 60 + s1;
    t2 = h2 * 3600 + m2 * 60 + s2;
    if (t1 > t2)
        cout << 3600 * 24 - abs(t1 - t2);
    else
        cout << abs(t1 - t2);

    return 0;
}