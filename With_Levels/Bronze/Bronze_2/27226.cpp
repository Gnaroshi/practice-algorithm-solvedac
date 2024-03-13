// problem: Лестница из чисел
// id: 27226
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b, k, c, it;
    cin >> a >> b >> k;

    for (long long i = a; i <= b; i++)
    {
        c = i * (i - 1) / 2 + 1;
        it = c + min(i, k);
        for (long long j = c; j < it; j++)
            cout << j << ((j != it - 1) ? ' ' : '\n');
    }

    return 0;
}