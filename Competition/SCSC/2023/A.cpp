// problem: A번 - 미소녀 컴퓨터 파루빗토 쨩
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;

int otoi(string t)
{
    int ti = t.length();
    long long ret = 0;
    int m = 1;
    for (int i = ti - 1; i >= 0; i--)
    {
        ret += (t[i] - '0') * m;
        m *= 8;
    }
    return ret;
}

void itoo(long long n)
{
    vector<int> v;
    if (n == 0)
        v.push_back(0);
    while (n > 0)
    {
        v.push_back(n % 8);
        n -= n % 8;
        n /= 8;
    }
    reverse(v.begin(), v.end());
    for (auto r : v)
        cout << r;
    return;
}

int main(void)
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    string s;
    cin >> s;
    long long a = 0, b = 0;
    int iter = s.length();
    string sa, sb;
    int loc;
    char c;
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            if (i != 0)
            {
                loc = i;
                c = s[i];
                break;
            }
        }
    }
    sa = s.substr(0, loc);
    sb = s.substr(loc + 1, iter);

    int ai = sa.length(), bi = sb.length();
    if (sa[0] == '-')
        a = -1 * (otoi(sa.substr(1, ai)));
    else
        a = otoi(sa);
    if (sb[0] == '-')
        b = -1 * (otoi(sb.substr(1, bi)));
    else
        b = otoi(sb);
    if (c == '/' && b == 0)
        cout << "invalid";
    else
    {
        if (c == '+')
            a += b;
        else if (c == '-')
            a -= b;
        else if (c == '*')
            a *= b;
        else
        {
            if ((a < 0 && b > 0) || (a > 0 && b < 0))
            {
                if (a % b != 0)
                {
                    a /= b;
                    a--;
                }
                else
                {
                    a /= b;
                }
            }
            else
                a /= b;
        }
        if (a < 0)
        {
            cout << "-";
            itoo(-1 * a);
        }
        else
            itoo(a);
    }
    return 0;
}