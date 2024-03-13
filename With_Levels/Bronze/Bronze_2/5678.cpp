// problem: Bakugan
// id: 5678
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r;
    while (true)
    {
        int m = 0, l = 0, mt = 100, lt = 100, mb, lb, mbc, lbc;
        cin >> r;
        if (!r)
            break;
        vector<int> a(r), b(r);
        for (auto &i : a)
        {
            cin >> i;
            m += i;
        }
        for (auto &i : b)
        {
            cin >> i;
            l += i;
        }
        mb = lb = 0;
        mbc = lbc = 1;
        for (int i = 0; i < r; i++)
        {
            if (mb == a[i])
                mbc++;
            else
                mbc = 1;
            if (lb == b[i])
                lbc++;
            else
                lbc = 1;
            if (mbc == 3 && mt == 100)
                mt = i;
            if (lbc == 3 && lt == 100)
                lt = i;
            mb = a[i], lb = b[i];
        }
        if (mt != 100 && lt != 100)
        {
            if (mt < lt)
                m += 30;
            else if (mt > lt)
                l += 30;
        }
        else if (mt != 100 && lt == 100)
            m += 30;
        else if (mt == 100 && lt != 100)
            l += 30;
        if (m == l)
            cout << "T\n";
        else if (m > l)
            cout << "M\n";
        else
            cout << "L\n";
    }

    return 0;
}