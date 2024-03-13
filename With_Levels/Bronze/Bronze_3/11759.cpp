// problem: Bottled-Up Feelings
// id: 11759
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long s, v1, v2;
    cin >> s >> v1 >> v2;
    int va, vb;
    va = s - (s % v1);
    vb = (s - va);
    if (vb % v2 != 0)
    {
        va /= v1;
        bool chk = true;
        while (va >= 0)
        {
            vb = s - (va * v1);
            if (vb % v2 == 0)
            {
                chk = false;
                cout << va << ' ' << vb / v2;
                break;
            }
            va--;
        }
        if (chk)
            cout << "Impossible";
    }
    else
        cout << va / v1 << ' ' << vb / v2;

    return 0;
}