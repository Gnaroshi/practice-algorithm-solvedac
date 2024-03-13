// problem: 이진법 시계
// id: 2704
// time taken:
#include <bits/stdc++.h>
using namespace std;

string stob(int n)
{
    string r = "";
    for (int i = 0; i < 6; i++)
    {
        r.push_back(char(n % 2 + '0'));
        n /= 2;
    }
    reverse(r.begin(), r.end());
    return r;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        string s, a, b, c;
        cin >> s;
        int iter = s.length();
        for (int i = 0; i < iter; i++)
            if (s[i] == ':')
                s[i] = ' ';
        stringstream st;
        st.str(s);
        int hr, mnt, snd;
        st >> hr >> mnt >> snd;
        a = stob(hr);
        b = stob(mnt);
        c = stob(snd);
        for (int i = 0; i < 6; i++)
            cout << a[i] << b[i] << c[i];
        cout << ' ';
        cout << a << b << c << '\n';
    }

    return 0;
}