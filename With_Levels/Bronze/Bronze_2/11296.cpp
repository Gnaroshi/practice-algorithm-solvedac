// problem: 가격
// id: 11296
// time taken:

#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    cout << fixed;
    cout.precision(2);
    while (tc--)
    {
        double op, dis = 0;
        char d, c, pm;
        cin >> op >> d >> c >> pm;
        if (d == 'R')
            dis = 0.45;
        else if (d == 'G')
            dis = 0.30;
        else if (d == 'B')
            dis = 0.20;
        else if (d == 'Y')
            dis = 0.15;
        else if (d == 'O')
            dis = 0.10;
        else
            dis = 0.05;
        op *= (1.0 - dis);

        if (c == 'C')
            op *= 0.95;
        //! [data type conversion]
        if (pm == 'C')
        {
            int iop = int(op * 100);
            if (iop % 10 > 5)
                iop = iop + 10 - iop % 10;
            else
                iop -= iop % 10;
            op = double(iop) / 100.0;
        }
        cout << '$' << op << '\n';
    }

    return 0;
}