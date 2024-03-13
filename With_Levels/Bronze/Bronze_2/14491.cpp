// problem: 9진수
// id: 14491
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    string s = "";
    while (t > 0)
    {
        s += char('0' + t % 9);
        t /= 9;
    }
    reverse(s.begin(), s.end());
    cout << s;

    return 0;
}