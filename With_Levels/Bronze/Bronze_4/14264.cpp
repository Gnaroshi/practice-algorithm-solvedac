#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double l;
    double a = 4.0;
    double b = sqrt(3);
    double c = b / a;
    cin >> l;
    cout << fixed;
    cout.precision(12);
    cout
        << l * l * c << '\n';

    return 0;
}