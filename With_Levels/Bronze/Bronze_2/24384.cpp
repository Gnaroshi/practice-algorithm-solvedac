// problem: ЗАПЛАТА
// id: 24384
// time taken:
#include <bits/stdc++.h>
using namespace std;
int k, t;
string s = "";
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> k;
    for (long long i = 1;; i++)
    {
        if (s.length() > 1000000)
            break;
        s += to_string(i * i * i);
    }
    cout << s[k - 1];

    return 0;
}