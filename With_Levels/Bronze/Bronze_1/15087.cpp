// problem: DRM Messages
// id: 15087
// time taken:
#include <bits/stdc++.h>
using namespace std;

string rt(string s)
{
    int cnt = 0;
    for (auto i : s)
        cnt += (i - 'A');
    cnt %= 26;
    string ret = "";
    for (auto i : s)
        ret += char((i - 'A' + cnt) % 26 + 'A');
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, a, b;
    cin >> s;
    int iter = s.length() / 2;
    a = s.substr(0, iter);
    b = s.substr(iter);
    a = rt(a);
    b = rt(b);
    for (int i = 0; i < iter; i++)
    {
        cout << char((a[i] - 'A' + b[i] - 'A') % 26 + 'A');
    }
    return 0;
}