// problem: Easy Encryption
// id: 9783
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    getline(cin, s);
    int p, iter = s.length();
    for (int i = 0; i < iter; i++)
    {
        if (('a' <= s[i] && s[i] <= 'z'))
        {
            p = s[i] - 'a' + 1;
            if (p < 10)
                cout << 0 << p;
            else
                cout << p;
        }
        else if (('A' <= s[i] && s[i] <= 'Z'))
            cout << s[i] - 'A' + 27;
        else if ('0' <= s[i] && s[i] <= '9')
            cout << "#" << s[i];
        else
            cout << s[i];
    }

    return 0;
}
