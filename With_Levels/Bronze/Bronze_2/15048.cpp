// problem: Jogo de Boca
// id: 15048
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int t = 0, iter = s.length();
    for (int i = 0; i < iter; i++)
        t = (t * 10 + (s[i] - '0')) % 3;

    cout << t;

    return 0;
}