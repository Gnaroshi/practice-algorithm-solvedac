// problem: 거스름돈
// id: 5585
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    cin >> n;
    n = 1000 - n;
    cnt += n / 500;
    n %= 500;
    cnt += n / 100;
    n %= 100;
    cnt += n / 50;
    n %= 50;
    cnt += n / 10;
    n %= 10;
    cnt += n / 5;
    n %= 5;
    cout << cnt + n;

    return 0;
}