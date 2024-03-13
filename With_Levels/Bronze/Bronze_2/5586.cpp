// problem: JOI와 IOI
// id: 5586
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int a = 0, b = 0, iter = s.length() - 2;
    for (int i = 0; i < iter; i++)
    {
        if (s[i + 1] == 'O' && s[i + 2] == 'I')
        {
            if (s[i] == 'J')
                a++;
            else if (s[i] == 'I')
                b++;
        }
    }
    cout << a << '\n'
         << b;

    return 0;
}