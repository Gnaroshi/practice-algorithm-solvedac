// problem: 2의 제곱수 계산하기
// id: 19946
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ull n;
    cin >> n;
    if (n == 18446744073709551615)
        cout << 64;
    else
    {
        int cnt = 64;
        while (true)
        {
            if (n % 2)
            {
                cout << cnt;
                break;
            }
            n /= 2;
            cnt--;
        }
    }

    return 0;
}