// problem: H번 - A+B - 10 (제1편)
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int r, a, b;
    bool ca = false, cb = false;
    for (int i = 1; i < 9; i++)
    {
        cout << "? A " << i << endl;
        cin >> r;
        if (r)
        {
            a = i;
            ca = true;
            break;
        }
    }
    if (!ca)
        a = 9;
    for (int i = 1; i < 9; i++)
    {
        cout << "? B " << i << endl;
        cin >> r;
        if (r)
        {
            b = i;
            cb = true;
            break;
        }
    }
    if (!cb)
        b = 9;
    cout << "! " << a + b;

    return 0;
}