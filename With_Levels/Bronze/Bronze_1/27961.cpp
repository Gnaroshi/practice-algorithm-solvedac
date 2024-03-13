// problem: 고양이는 많을수록 좋다
// id: 27961
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a;
    ll t = 1;
    int cnt = 1;
    cin >> a;
    if (a != 0)
    {
        while (a > t)
        {
            t *= 2;
            cnt++;
        }
    }
    else
        cnt = 0;
    cout << cnt;

    return 0;
}