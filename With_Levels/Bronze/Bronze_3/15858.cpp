// problem: Simple Arithmetic
// id: 15858
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ld = long double;
using ll = long long;
int main(void)
{
    ll a, b, c, d, t;
    cin >> a >> b >> c;
    d = a * b;
    string temp = to_string(d / c);
    temp.push_back('.');
    // under point
    t = d;
    for (int i = 0; i < 10; i++)
    {
        t %= c;
        t *= 10;
        if (t < c)
            temp.push_back('0');
        else
            temp.push_back(t / c + '0');
    }
    cout << temp;

    return 0;
}