// problem: 11 月 (November)
// id: 27332
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    if (a + b * 7 > 30)
        cout << 0;
    else
        cout << 1;

    return 0;
}