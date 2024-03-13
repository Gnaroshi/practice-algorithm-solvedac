#include <bits/stdc++.h>
using namespace std;

long long rec(long long a, long long b, long long c)
{
    if (b == 1)
        return a % c;
    long long temp = rec(a, b / 2, c);
    temp = temp * temp % c;
    if (b % 2 == 0)
        return temp;
    return temp * a % c;
}

int main(void)
{
    long long a, b, c;
    cin >> a >> b >> c;

    cout << rec(a, b, c);
    return 0;
}