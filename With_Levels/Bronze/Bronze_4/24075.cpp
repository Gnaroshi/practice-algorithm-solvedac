// problem: 計算 (Calculation)
// id: 24075
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    cout << max(a + b, a - b) << '\n'
         << min(a + b, a - b);

    return 0;
}