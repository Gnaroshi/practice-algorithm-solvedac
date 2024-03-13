// problem: H4x0r
// id: 26768
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
    for (int i = 0; i < iter; i++)
    {
        char c = s[i];
        if (c == 'a')
            cout << 4;
        else if (c == 'e')
            cout << 3;
        else if (c == 'i')
            cout << 1;
        else if (c == 'o')
            cout << 0;
        else if (c == 's')
            cout << 5;
        else
            cout << c;
    }

    return 0;
}