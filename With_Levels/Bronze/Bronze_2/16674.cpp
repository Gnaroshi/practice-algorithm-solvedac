// problem: 2018년을 되돌아보며
// id: 16674
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int chk[5] = {0};
    for (auto i : s)
    {
        if (i == '2')
            chk[0]++;
        else if (i == '0')
            chk[1]++;
        else if (i == '1')
            chk[2]++;
        else if (i == '8')
            chk[3]++;
        else
            chk[4]++;
    }
    if (chk[4])
        cout << 0;
    else
    {
        if (chk[0] == chk[1] && chk[0] == chk[2] && chk[0] == chk[3] && chk[0] != 0)
            cout << 8;
        else if (chk[0] && chk[1] && chk[2] && chk[3])
            cout << 2;
        else
            cout << 1;
    }

    return 0;
}