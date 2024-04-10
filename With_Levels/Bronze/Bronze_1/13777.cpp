// problem: Hunt The Rabbit
// id: 13777
// tag:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        int a, b, c;
        a = 1, b = 50;
        while (true)
        {
            c = (a + b) / 2;
            cout << c << ' ';
            if (c == n)
            {
                cout << '\n';
                break;
            }
            else if (c > n)
                b = c - 1;
            else
                a = c + 1;
        }
    }

    return 0;
}
