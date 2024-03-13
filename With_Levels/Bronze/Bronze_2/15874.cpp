// problem: Caesar Cipher
// id: 15874
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, a;
    cin >> k >> a;
    string s;
    cin.ignore();
    getline(cin, s);
    int iter = s.length();
    k %= 26;
    for (int i = 0; i < iter; i++)
    {
        if (isalpha(s[i]))
        {
            if (islower(s[i]))
                s[i] = (s[i] - 'a' + k) % 26 + 'a';
            else
                s[i] = (s[i] - 'A' + k) % 26 + 'A';
        }
    }
    cout << s;

    return 0;
}