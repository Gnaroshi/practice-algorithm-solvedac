// problem: 이항계수 3
// id: 11401
// time taken:
#include <bits/stdc++.h>
using namespace std;

#define P 1000000007
#define ll long long

//(n*(n-1)*(k!)^P-2)%P

ll func(int x, int n)
{
    ll temp = 1;
    for (int i = x; i <= n; i++)
        temp = temp * i % P;
    return temp;
}

ll po(int a, int b)
{
    if (b == 1)
        return a % P;
    ll h = po(a, b / 2);
    if (b % 2 == 1)
        return h * h % P * a % P;
    return h * h % P;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    cout << func(n - k + 1, n) * po(func(1, k), P - 2) % P;
    return 0;
}