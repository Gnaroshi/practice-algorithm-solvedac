#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    if (a == b)
        cout << a << '\n';
    else
    {
        cout << max(a, b) << '\n';
    }
    return 0;
}