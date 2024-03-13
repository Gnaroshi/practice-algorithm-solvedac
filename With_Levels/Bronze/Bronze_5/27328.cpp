#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    if (a < b)
        cout << -1;
    else if (a == b)
        cout << 0;
    else
        cout << 1;
    return 0;
}