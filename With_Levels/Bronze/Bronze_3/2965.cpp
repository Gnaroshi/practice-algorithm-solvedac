// problem: 캥거루 세마리
// id: 2965
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    cout << max(b - a - 1, c - b - 1);

    return 0;
}