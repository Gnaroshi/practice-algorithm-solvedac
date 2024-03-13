// problem: Vigenère Cipher
// id: 5222
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
        cout << "Ciphertext: ";
        string a, b;
        cin >> a >> b;
        int iter = b.length(), m = a.length();
        int *ec = (int *)malloc(sizeof(int) * m);
        for (int i = 0; i < m; i++)
            ec[i] = a[i] - 'A';
        for (int i = 0; i < iter; i++)
        {
            cout << char((b[i] - 'A' + ec[i % m]) % 26 + 'A');
        }
        cout << '\n';
    }

    return 0;
}