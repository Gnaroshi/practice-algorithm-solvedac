// problem: Math Practice
// id: 5940
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll bf[63];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    ll t = 1;
    for (int i = 0; i < 63; i++)
    {
        bf[i] = to_string(t)[0] - '0';
        t *= 2;
    }
    for (int i = a + 1; i < 63; i++)
    {
        if (bf[i] == b)
        {
            cout << i;
            return 0;
        }
    }
    cout << 0;

    return 0;
}