// problem: Digits
// id: 4176
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (true)
    {
        cin >> s;
        if (s == "END")
            break;
        int ans = 0;
        string a = s, b;
        while (b != a)
        {
            ans++;
            b = a;
            s = to_string(b.size());
            a = s;
        }
        cout << ans << '\n';
    }

    return 0;
}