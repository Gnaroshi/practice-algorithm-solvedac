#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    char temp;
    cin >> a >> temp >> b >> temp >> c;
    if (a + b == c)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}