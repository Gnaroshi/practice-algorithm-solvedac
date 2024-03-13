// problem: 샤틀버스
// id: 25625
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;
    if (x > y)
        cout << x + y;
    else
        cout << y - x;

    return 0;
}