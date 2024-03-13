// problem: 한다 안한다
// id: 5789
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
        int iter = s.length();
        if (s[iter / 2] == s[iter / 2 - 1])
            cout << "Do-it\n";
        else
            cout << "Do-it-Not\n";
    }

    return 0;
}