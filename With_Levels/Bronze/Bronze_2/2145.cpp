// problem: 숫자 놀이
// id: 2145
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        string s = to_string(n);
        while (s.length() != 1)
        {
            int t = 0;
            for (auto i : s)
                t += i - '0';
            s = to_string(t);
        }
        cout << s << '\n';
    }

    return 0;
}