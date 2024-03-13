// problem: 유진수
// id: 1356
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, sa, sb;
    cin >> s;
    if (s.length() == 1)
    {
        cout << "NO";
        return 0;
    }
    int iter = s.length(), a, b;
    bool chk = false;
    for (int i = 1; i < iter; i++)
    {
        a = 1, b = 1;
        sa = s.substr(0, i);
        sb = s.substr(i, iter - i + 1);
        for (auto k : sa)
            a *= k - '0';
        for (auto k : sb)
            b *= k - '0';
        if (a == b)
        {
            chk = true;
            break;
        }
    }
    cout << (chk ? "YES" : "NO");

    return 0;
}