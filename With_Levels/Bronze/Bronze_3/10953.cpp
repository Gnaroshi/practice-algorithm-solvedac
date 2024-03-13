// problem: A+B - 6
// id: 10953
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int tc;
    cin >> tc;
    while (tc--)
    {
        cin >> s;
        cout << s[0] - '0' + s[2] - '0' << '\n';
    }

    return 0;
}