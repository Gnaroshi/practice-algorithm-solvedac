// problem: Cryptoquote
// id: 2703
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
        cin.ignore();
        string s, c;
        getline(cin, s);
        cin >> c;
        int iter = s.length();
        for (int i = 0; i < iter; i++)
        {
            if (isalpha(s[i]))
                cout << c[s[i] - 'A'];
            else
                cout << s[i];
        }
        cout << '\n';
    }

    return 0;
}