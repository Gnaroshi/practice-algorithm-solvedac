// problem: 8진수, 10진수, 16진수
// id: 11816
// time taken:
#include <bits/stdc++.h>
using namespace std;

int otoi(string a)
{
    int ai = a.length();
    int ret = 0;
    int m = 1;
    for (int i = ai - 1; i >= 0; i--)
    {
        ret += (a[i] - '0') * m;
        m *= 8;
    }
    return ret;
}
int htoi(string a)
{
    int ai = a.length();
    int ret = 0;
    int m = 1;
    for (int i = ai - 1; i >= 0; i--)
    {
        if (a[i] >= 'a' && a[i] <= 'f')
            ret += (a[i] - 'a' + 10) * m;
        else
            ret += (a[i] - '0') * m;
        m *= 16;
    }
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int iter = s.length();
    if (iter >= 2)
    {
        if (s[0] == '0')
        {
            if (s[1] == 'x')
                cout << htoi(s.substr(2, iter - 2));
            else
                cout << otoi(s.substr(1, iter - 1));
        }
        else
            cout << s;
    }
    else
        cout << s;

    return 0;
}