// problem: 첫 글자를 대문자로
// id: 4458
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--)
    {
        string s;
        getline(cin, s);
        if (s[0] <= 'z' && s[0] >= 'a')
            s[0] = s[0] - 'a' + 'A';
        cout << s << '\n';
    }
    return 0;
}