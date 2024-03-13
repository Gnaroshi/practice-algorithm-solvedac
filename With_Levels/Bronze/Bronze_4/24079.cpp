// problem: 移動 (Moving)
// id: 24079
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    a *= 60;
    b *= 60;
    c *= 60;
    if (a + b > c + 30)
        cout << 0;
    else
        cout << 1;

    return 0;
}