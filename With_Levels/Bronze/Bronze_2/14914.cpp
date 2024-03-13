// problem: 사과와 바나나 나눠주기
// id: 14914
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;

    int iter = min(a, b);
    for (int i = 1; i <= iter; i++)
        if (a % i == 0 && b % i == 0)
            cout << i << ' ' << a / i << ' ' << b / i << '\n';
    return 0;
}