// problem: 완전제곱수
// id: 1977
// time taken:
#include <bits/stdc++.h>
using namespace std;

int sq[101];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for (int i = 1; i <= 100; i++)
        sq[i] = i * i;

    int n, m, a, b;
    a = b = -1;
    cin >> n >> m;
    for (int i = 1; i < 101; i++)
    {
        if (n <= sq[i])
        {
            a = i;
            break;
        }
    }

    for (int i = 100; i > 0; i--)
    {
        if (m >= sq[i])
        {
            b = i;
            break;
        }
    }
    if (a > b)
        cout << -1;
    else
    {
        int s = 0;
        for (int i = a; i <= b; i++)
            s += sq[i];
        cout << s << '\n'
             << sq[a];
    }

    return 0;
}