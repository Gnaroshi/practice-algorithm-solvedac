// problem: Fridge of Your Dreams
// id: 11104
// time taken:
#include <bits/stdc++.h>
using namespace std;

int btoi(string s)
{
    int iter = s.length();
    int ret = 0;
    int c = 1;
    for (int i = iter - 1; i >= 0; i--)
    {
        ret += (s[i] - '0') * c;
        c *= 2;
    }
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        cout << btoi(s) << '\n';
    }

    return 0;
}