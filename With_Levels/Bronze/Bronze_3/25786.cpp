// problem: Decimal XOR
// id: 25786
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;
    vector<int> va;
    vector<int> vb;
    int al = a.length();
    int bl = b.length();
    int mxl = max(al, bl);
    for (int i = 0; i < mxl - al; i++)
        va.push_back(0);
    for (int i = 0; i < al; i++)
        va.push_back(a[i] - '0');
    for (int i = 0; i < mxl - bl; i++)
        vb.push_back(0);
    for (int i = 0; i < bl; i++)
        vb.push_back(b[i] - '0');

    for (int i = 0; i < mxl; i++)
    {
        if ((va[i] <= 2 && vb[i] <= 2) || (va[i] >= 7 && vb[i] >= 7))
            cout << 0;
        else
            cout << 9;
    }

    return 0;
}
