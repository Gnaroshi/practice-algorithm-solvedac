#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    string b;
    cin >> a >> b;

    cout << a * int(b[2] - '0') << '\n';
    cout << a * int(b[1] - '0') << '\n';
    cout << a * int(b[0] - '0') << '\n';
    cout << a * (int(b[2] - '0') + int(b[1] - '0') * 10 + int(b[0] - '0') * 100) << '\n';

    return 0;
}