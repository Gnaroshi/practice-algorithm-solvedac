// problem: Happy Number
// id: 14954
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll f(ll n)
{
    ll t = 0;
    while (n > 0)
    {
        t += (n % 10) * (n % 10);
        n /= 10;
    }
    return t;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, og;
    cin >> n;
    og = n;
    bool chk = false;
    set<int> s;
    while (true)
    {
        if (n == 1)
        {
            chk = true;
            break;
        }
        n = f(n);
        if (s.find(n) != s.end())
            break;
        s.insert(n);
    }
    if (chk)
        cout << "HAPPY";
    else
        cout << "UNHAPPY";

    return 0;
}