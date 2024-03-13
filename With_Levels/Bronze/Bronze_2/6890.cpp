// problem: Simple Encryption
// id: 6890
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string k, s, t = "";
    cin >> k;
    cin.ignore();
    getline(cin, s);
    for (auto i : s)
        if (isalpha(i))
            t += i;
    int kl = k.length(), iter = t.length();
    for (int i = 0; i < iter; i++)
    {
        cout << char(((t[i] - 'A') + (k[i % kl] - 'A')) % 26 + 'A');
    }

    return 0;
}