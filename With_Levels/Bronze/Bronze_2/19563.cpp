// problem: 개구리 1
// id: 19563
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b, c;
    cin >> a >> b >> c;
    if (abs(a) + abs(b) > c)
        cout << "NO";
    else if ((c - (abs(a) + abs(b))) % 2)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}