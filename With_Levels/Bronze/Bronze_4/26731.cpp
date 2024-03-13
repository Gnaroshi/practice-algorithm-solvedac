// problem: Zagubiona litera
// id: 26731
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    bool a[26];
    fill(a, a + 26, 0);
    cin >> s;
    int iter = s.length();
    for (int i = 0; i < iter; i++)
        a[s[i] - 'A'] = 1;
    for (int i = 0; i < iter + 1; i++)
        if (!a[i])
            cout << char(i + 'A');

    return 0;
}