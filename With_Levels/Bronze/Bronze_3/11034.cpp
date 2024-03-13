// problem: 캥거루 세마리2
// id: 11034
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    while (cin >> a >> b >> c)
        cout << max(b - a - 1, c - b - 1) << '\n';

    return 0;
}