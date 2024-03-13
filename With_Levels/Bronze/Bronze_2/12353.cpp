// problem: Dr. Spaceman의 특별한 알고리즘
// id: 12353
// time taken:
#include <bits/stdc++.h>
using namespace std;

int fn(string n)
{
    if (n.length() == 5)
        return (n[0] - '0') * 12 + (n[2] - '0') * 10 + (n[3] - '0');
    else
        return (n[0] - '0') * 12 + (n[2] - '0');
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Case #" << tcc << ": ";
        char c;
        string a, b;
        int h, mxf, mxe, mnf, mne;
        cin >> c >> a >> b;
        h = fn(a) + fn(b);
        if (c == 'B')
            h += 5;
        else
            h -= 5;
        bool e = h % 2;
        if (e)
            h--;
        h /= 2;
        h -= 4;
        h += e;
        mnf = h / 12;
        mne = h % 12;
        h += 8;
        h -= e;
        mxf = h / 12;
        mxe = h % 12;
        cout << mnf << '\'' << mne << "\" to " << mxf << '\'' << mxe << "\"\n";
    }

    return 0;
}