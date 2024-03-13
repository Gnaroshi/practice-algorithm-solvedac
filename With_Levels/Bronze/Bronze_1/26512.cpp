// problem: Complimentary
// id: 26512
// time taken:
#include <bits/stdc++.h>
using namespace std;

string ts(int n)
{
    string ret = "";
    while (n > 0)
    {
        ret += char('0' + n % 2);
        n /= 2;
    }
    int l = ret.length();
    for (int i = l; i < 8; i++)
    {
        ret += '0';
    }
    return ret;
}

int sts(string s)
{
    int ret = 0, r = 1;
    for (auto i : s)
    {
        if (i == '1')
            ret += r;
        r *= 2;
    }
    return ret;
}

pair<string, string> fn(int a)
{
    string sa = ts(a), msa = "";
    for (auto i : sa)
    {
        if (i == '0')
            msa += '1';
        else
            msa += '0';
    }
    int t = sts(msa);
    t++;
    msa = ts(t);
    reverse(sa.begin(), sa.end());
    reverse(msa.begin(), msa.end());
    return {sa, msa};
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    while (true)
    {
        cin >> a >> b;
        if (a + b == 0)
            break;
        c = a - b;
        auto ta = fn(a), tb = fn(b), tc = fn(abs(c));
        cout << a << " = " << ta.first << "\n";
        cout << b << " = " << tb.first << "\n";
        cout << '-' << a << " = " << ta.second << "\n";
        cout << '-' << b << " = " << tb.second << "\n";
        cout << c << " = ";
        if (c < 0)
            cout << tc.second << "\n";
        else
            cout << tc.first << "\n";
        cout << '\n';
    }

    return 0;
}