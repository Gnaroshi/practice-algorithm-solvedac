// problem: 사라진 페이지 찾기
// id: 9437
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, p;
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        cin >> p;
        if (p > n / 2)
        {
            if (p % 2)
                cout << n - p << ' ' << n - p + 1 << ' ' << p + 1 << '\n';
            else
                cout << n - p + 1 << ' ' << n - p + 2 << ' ' << p - 1 << '\n';
        }
        else
        {
            if (p % 2)
                cout << p + 1 << ' ' << n - p << ' ' << n - p + 1 << '\n';
            else
                cout << p - 1 << ' ' << n - p + 1 << ' ' << n - p + 2 << '\n';
        }
    }
    return 0;
}