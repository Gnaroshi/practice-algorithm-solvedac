// problem: 싱기한 네자리 숫자
// id: 6679
// time taken:
#include <bits/stdc++.h>
using namespace std;

int fn1(int n, int d)
{
    int t = 0;
    while (n > 0)
    {
        t += n % d;
        n /= d;
    }
    return t;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 1000; i <= 9999; i++)
    {
        int a = fn1(i, 10);
        int b = fn1(i, 12);
        int c = fn1(i, 16);
        if (a == b && b == c)
            cout << i << '\n';
    }

    return 0;
}