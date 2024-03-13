#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b, c;
    cin >> a >> b >> c;
    cout << (int)max(a / b * c, a * b / c) << '\n';
    return 0;
}