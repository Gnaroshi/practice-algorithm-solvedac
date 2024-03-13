// problem: Date
// id: 26576
// time taken:
#include <bits/stdc++.h>
using namespace std;

string mth[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

string fn(string a, string b, string c)
{
    string ret = "";
    bool chk = false;
    int m = 0, d, y = stoi(c);
    for (int i = 0; i < 12; i++)
    {
        if (a == mth[i])
        {
            chk = true;
            m = i + 1;
            break;
        }
    }
    d = stoi(b.substr(0, b.length() - 1));

    if (d > 31 || d < 1 || !chk)
        return "Invalid";

    if (m < 10)
        ret += '0';
    ret += to_string(m);
    ret += '/';
    if (d < 10)
        ret += '0';
    ret += to_string(d);
    ret += '/';
    if (y < 10)
    {
        ret += '0';
        ret += char(y + '0');
    }
    else
        ret += c.substr(c.length() - 2);
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
        string a, b, c;
        cin >> a >> b >> c;
        cout << fn(a, b, c) << '\n';
    }

    return 0;
}