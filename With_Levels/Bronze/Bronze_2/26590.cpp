// problem: Word Mix
// id: 26590
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;
    int ia, ib;
    ia = a.length();
    ib = b.length();
    if (ia > ib)
    {
        for (int i = 0; i < ib; i++)
        {
            if (i % 2)
                cout << a[i];
            else
                cout << b[i];
        }
    }
    else
    {
        for (int i = 0; i < ia; i++)
        {
            if (i % 2)
                cout << b[i];
            else
                cout << a[i];
        }
    }

    return 0;
}