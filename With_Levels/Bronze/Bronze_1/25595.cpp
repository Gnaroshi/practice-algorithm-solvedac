// problem: 86 ─에이티식스─ 2
// id: 25595
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n;
    bool chkSN = false, chkRG = false, sn, opa = false, epa = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> t;
            if (t == 2)
                sn = ((i + j) % 2), chkSN = true;
            else if (t == 1)
            {
                chkRG = true;
                if ((i + j) % 2)
                    opa = true;
                else
                    epa = true;
            }
        }
    }
    if (chkSN == false && chkRG == true)
    {
        cout << "Kiriya";
        return 0;
    }
    else if (chkRG == false)
    {
        cout << "Lena";
        return 0;
    }

    if ((sn && (epa && !opa)) ||
        (!sn && (!epa && opa)))
        cout << "Lena";
    else
        cout << "Kiriya";

    return 0;
}