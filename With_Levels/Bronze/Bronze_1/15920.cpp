// problem: 선로에 마네킹이야!!
// id: 15920
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, w = 0;
    bool chk = true, mtchk = false;
    string s;
    cin >> n >> s;
    for (auto i : s)
    {
        if (i == 'W')
            w++;
        else
        {
            chk = !chk;
            if (w == 1)
                mtchk = true;
        }
        if (w == 2)
            break;
    }
    if (w < 2)
        cout << 0;
    else
    {
        if (mtchk)
            cout << 6;
        else if (chk)
            cout << 5;
        else
            cout << 1;
    }

    return 0;
}