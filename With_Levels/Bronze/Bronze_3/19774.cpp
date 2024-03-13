// problem: ABCD-код
// id: 19774
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        int a = (s[0] - '0') * 10 + (s[1] - '0');
        int b = (s[2] - '0') * 10 + (s[3] - '0');
        if ((a * a + b * b) % 7 == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
