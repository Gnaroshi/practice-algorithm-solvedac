// problem: РЕДИЦА
// id: 24376
// time taken:
#include <bits/stdc++.h>
using namespace std;

int ns[1000001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n, a = 1, b = 1, t;
    cin >> x >> n;
    ns[0] = 1;
    while (a < n)
    {
        t = 0;
        for (int i = 0; i < b; i++)
        {
            int pd = ns[i] * x + t;
            ns[i] = pd % 10;
            t = pd / 10;
        }
        while (t > 0)
        {
            ns[b] = t % 10;
            b++;
            t = t / 10;
        }
        a += b;
    }
    cout << ns[a - n];

    return 0;
}