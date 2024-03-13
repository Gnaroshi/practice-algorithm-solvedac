// problem: Середина игры
// id: 30584
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    if (a % 2 != b % 2)
        cout << "Error";
    else if (min(a, b) > 1)
        cout << "Undefined";
    else
    {
        cout << max((a - b) / 2, 0) << '\n'
             << max((b - a) / 2, 0) << '\n'
             << min(a, b) << '\n';
    }

    return 0;
}