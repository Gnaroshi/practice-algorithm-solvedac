// problem: Расколбас с Франкенштейном
// id: 28535
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char a, b, c;
    string s = "NZQR";
    int la, lb;
    cin >> a >> c >> b;
    la = s.find(a);
    lb = s.find(b);
    if (a == b && a == 'N' && c == '-')
        cout << 'Z';
    else
        cout << s[max(la, lb)];

    // N Z Q R
    // N Z Q R

    return 0;
}