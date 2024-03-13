// problem: Palindromic FizzBuzz
// id: 19685
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool fn(ll n)
{
    string s = to_string(n);
    int iter = s.length() / 2, si = s.length();
    for (int i = 0; i < iter; i++)
    {
        if (s[i] != s[si - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll s, e;
    cin >> s >> e;
    for (ll i = s; i <= e; i++)
    {
        if (fn(i))
            cout << "Palindrome!\n";
        else
            cout << i << '\n';
    }

    return 0;
}