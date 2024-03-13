// problem: Decoder
// id: 26502
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
        for (int i = 0; i < iter; i++)
        {
            if (s[i] == 'y')
                cout << 'a';
            else if (s[i] == 'a')
                cout << 'e';
            else if (s[i] == 'e')
                cout << 'i';
            else if (s[i] == 'i')
                cout << 'o';
            else if (s[i] == 'o')
                cout << 'u';
            else if (s[i] == 'u')
                cout << 'y';
            else if (s[i] == 'Y')
                cout << 'A';
            else if (s[i] == 'A')
                cout << 'E';
            else if (s[i] == 'E')
                cout << 'I';
            else if (s[i] == 'I')
                cout << 'O';
            else if (s[i] == 'O')
                cout << 'U';
            else if (s[i] == 'U')
                cout << 'Y';
            else
                cout << s[i];
        }
        cout << '\n';
    }

    return 0;
}