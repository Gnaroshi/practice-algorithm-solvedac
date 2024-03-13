// problem: Sequences
// id: 5101
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    while (true)
    {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
            break;

        if ((c - a) % b == 0 && (a <= c && b != 0))
            cout << (c - a) / b + 1 << '\n';
        else
            cout << "X\n";
    }

    return 0;
}