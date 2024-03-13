#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c, d, temp_mg, temp_ms;
    cin >> a >> b >> c >> d;
    temp_mg = a + b + c + d;
    cin >> a >> b >> c >> d;
    temp_ms = a + b + c + d;
    cout << max(temp_mg, temp_ms) << '\n';
    return 0;
}