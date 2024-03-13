// problem: Big Bang Secrets
// id: 6766
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, iter;
    string s;
    cin >> k >> s;
    iter = s.length();
    for (int i = 0; i < iter; i++)
    {
        cout << char((s[i] - 'A' - (3 * (i + 1) + k) + 26) % 26 + 'A');
    }

    return 0;
}