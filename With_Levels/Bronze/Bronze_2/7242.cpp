// problem: Gyvūnai
// id: 7242
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int chk[1441] = {0};
    for (int i = 0; i < n; i++)
    {
        int hf, mf, ht, mt;
        cin >> hf >> mf >> ht >> mt;
        mf += hf * 60;
        mt += ht * 60;
        for (int j = mf; j <= mt; j++)
            chk[j]++;
    }
    int hs = -1, he = -1;
    bool st = true;
    for (int i = 0; i < 1441; i++)
    {
        if (chk[i] == n)
        {
            if (st)
            {
                hs = i;
                st = false;
            }
            else
                he = i;
        }
    }
    if (hs != -1 && he != -1)
    {
        cout << "TAIP\n";
        cout << hs / 60 << ' ' << hs % 60 << ' ' << he / 60 << ' ' << he % 60;
    }
    else
        cout << "NE";

    return 0;
}