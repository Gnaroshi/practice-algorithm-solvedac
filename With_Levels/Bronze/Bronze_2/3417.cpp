// problem: Vigenère Cipher Encryption
// id: 3417
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string k, p;
    while (true)
    {
        cin >> k;
        if (k == "0")
            break;
        cin >> p;
        int kl = k.length(), pl = p.length();
        for (int i = 0; i < pl; i++)
        {
            cout << char((p[i] - 'A' + k[i % kl] - 'A' + 1) % 26 + 'A');
        }
        cout << '\n';
    }

    return 0;
}