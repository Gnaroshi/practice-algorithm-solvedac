// problem: Reverse Text
// id: 6438
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--)
    {
        string s;
        getline(cin, s);
        int iter = s.length();
        for (int i = iter - 1; i >= 0; i--)
            cout << s[i];
        cout << '\n';
    }

    return 0;
}