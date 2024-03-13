#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    if (n / 10 == n % 10)
        cout << 1 << '\n';
    else
        cout << 0 << '\n';

    return 0;
}