// problem: Word Ratios
// id: 4287
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b, c;
    while (true)
    {
        cin >> a;
        if (a == "#")
            break;
        cin >> b >> c;
        int iter = a.length();
        cout << a << ' ' << b << ' ' << c << ' ';
        for (int i = 0; i < iter; i++)
        {
            cout << char((c[i] - 'a' + b[i] - a[i] + 26) % 26 + 'a');
        }
        cout << '\n';
    }

    return 0;
}