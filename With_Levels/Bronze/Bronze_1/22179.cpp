// problem: Загранпаспорт
// id: 22179
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, m, op, n, ha, hb, ma, mb, w;
    bool chk = true;
    string s, e;
    cin >> s;
    h = stoi(s.substr(0, 2)), m = stoi(s.substr(3));
    op = h * 60 + m;
    cin >> n;
    while (n--)
    {
        cin >> s >> e >> w;
        if (!chk)
            continue;
        ha = stoi(s.substr(0, 2)), ma = stoi(s.substr(3));
        hb = stoi(e.substr(0, 2)), mb = stoi(e.substr(3));

        ha = max(ha * 60 + ma, op) + w;
        hb = hb * 60 + mb;
        if (ha > hb)
            chk = false;
        else
            op = ha;
    }

    if (chk)
    {
        cout << "Yes\n";
        h = op / 60, m = op % 60;
        if (h < 10)
            cout << 0;
        cout << h << ":";
        if (m < 10)
            cout << 0;
        cout << m;
    }
    else
        cout << "No";

    return 0;
}