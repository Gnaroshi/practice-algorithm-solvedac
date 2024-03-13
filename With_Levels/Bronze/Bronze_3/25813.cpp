// problem: Changing Strings
// id: 25813
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int iter = s.length();
    int ul, fl;
    ul = fl = -1;
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == 'U' && ul == -1)
            ul = i;
        if (s[i] == 'F')
            fl = i;
    }
    for (int i = 0; i < ul; i++)
        cout << '-';
    cout << 'U';
    for (int i = ul + 1; i < fl; i++)
        cout << 'C';
    cout << 'F';
    for (int i = fl + 1; i < iter; i++)
        cout << '-';

    return 0;
}