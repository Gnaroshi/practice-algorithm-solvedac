// problem: E번 - SW 수열 구하기
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int mx = n, mn = 1;
    bool sw = (n % 2 == 0 ? 1 : 0);
    for (int i = 0; i < n; i++)
    {
        if (sw)
            cout << mx-- << ' ';
        else
            cout << mn++ << ' ';
        sw = !sw;
    }

    return 0;
}