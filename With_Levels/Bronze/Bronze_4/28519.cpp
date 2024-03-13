// problem: Планеты двух измерений
// id: 28519
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    cout << min(a + b, min(a, b) * 2 + 1);

    return 0;
}