// problem: 타자 연습
// id: 17487
// time taken:
#include <bits/stdc++.h>
using namespace std;
string lh = "qwertyasdfgzxcvb";
string rh = "uiophjklnm";
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    int iter = s.length(), a = 0, b = 0, sh = 0;
    for (int i = 0; i < iter; i++)
    {
        if (isalpha(s[i]))
        {
            if (isupper(s[i]))
            {
                sh++;
                s[i] = tolower(s[i]);
            }

            if (lh.find(s[i]) != string::npos)
                a++;
            else
                b++;
        }
        else
            sh++;
    }
    if (a > b)
    {
        int dif = a - b;
        if (sh >= dif)
        {
            sh -= dif;
            b += dif;
        }
        else
        {
            b += sh;
            sh = 0;
        }
    }
    else if (a < b)
    {
        int dif = b - a;
        if (sh >= dif)
        {
            sh -= dif;
            a += dif;
        }
        else
        {
            a += sh;
            sh = 0;
        }
    }

    if (sh != 0)
    {
        if (sh % 2)
            a++;
        a += sh / 2;
        b += sh / 2;
    }
    cout << a << ' ' << b;

    return 0;
}