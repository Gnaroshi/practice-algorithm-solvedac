// problem: Цапли
// id: 21569
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    if (a > b)
        swap(a, b);
    cout << (b + 1) / 2 << ' ' << a;

    return 0;
}