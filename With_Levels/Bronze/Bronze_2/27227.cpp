// problem: Дивизионы
// id: 27227
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, div = 1;
    string s;
    cin >> r >> s;
    int iter = s.length();
    int n[3] = {0};
    for (int i = 0; i < iter; i++)
        n[s[i] - '0' - 1] = 1;
    if (r <= 1600)
        div = 3;
    else if (r <= 1900)
        div = 2;
    for (int i = 0; i < 3; i++)
    {
        if (n[div - 1])
        {
            cout << div;
            return 0;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (div - 1 > i && n[i])
            cout << i + 1 << '\n';
        else if (div - 1 < i && n[i])
            cout << i + 1 << "*\n";
    }

    return 0;
}