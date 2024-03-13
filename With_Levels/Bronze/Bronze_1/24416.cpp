// problem: 알고리즘 수업 - 피보나치 수 1
// id: 24416
// time taken:
#include <bits/stdc++.h>
using namespace std;

int a, b;
int fib(int n)
{
    if (n == 1 || n == 2)
    {
        a++;
        return 1;
    }
    else
        return fib(n - 1) + fib(n - 2);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    fib(n);
    b = n - 2;
    cout << a << ' ' << b << '\n';

    return 0;
}