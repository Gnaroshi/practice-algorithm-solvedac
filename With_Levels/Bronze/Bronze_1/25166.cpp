// problem: 배고픈 아리의 샌드위치 구매하기
// id: 25166
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, m, a[10] = {0}, st;
    int bn[10] = {0};
    bn[9] = 1;
    for (int i = 8; i >= 0; i--)
        bn[i] = bn[i + 1] * 2;

    cin >> s >> m;
    if (s <= 1023)
    {
        cout << "No thanks";
        return 0;
    }

    bool chk = true;
    s -= 1023;
    if (m < s)
        chk = false;
    else
    {
        for (int i = 0; i < 10; i++)
        {
            if (m >= bn[i] && m)
            {
                a[i] = 1;
                m -= bn[i];
            }
        }

        for (int i = 0; i < 10; i++)
        {
            if (a[i] && bn[i] <= s)
                s -= bn[i];
        }
        if (s == 0)
            chk = true;
        else
            chk = false;
    }

    if (chk)
        cout << "Thanks";
    else
        cout << "Impossible";

    return 0;
}