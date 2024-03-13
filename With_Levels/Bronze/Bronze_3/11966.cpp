// problem: 2의 제곱인가?
// id: 11966
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll bins[32];
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t = 1;
    for (int i = 0; i < 32; i++)
    {
        bins[i] = t;
        t *= 2;
    }
    ll n;
    cin >> n;
    bool chk = false;
    for (int i = 0; i < 32; i++)
    {
        if (bins[i] == n)
        {
            chk = true;
            break;
        }
        if (bins[i] > n)
            break;
    }
    cout << chk;
    return 0;
}