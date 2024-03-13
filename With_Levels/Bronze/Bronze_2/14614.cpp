// problem: Calculate!
// id: 14614
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    string s;
    cin >> a >> b >> s;
    int iter = s.length();
    if ((s[iter - 1] - '0') % 2 == 0)
        cout << a;
    else
        cout << (a ^ b);

    return 0;
}