// problem: O번 - A+B - 10 (제2편)
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int r, a, b;
    bool ca = false, cb = false;
    vector<int> v;
    for (int i = 1; i <= 10000; i++)
        v.push_back(i);
    random_shuffle(v.begin(), v.end());
    for (int i = 0; i < 9999; i++)
    {
        cout << "? A " << v[i] << endl;
        cin >> r;
        if (r)
        {
            a = v[i];
            ca = true;
            break;
        }
    }
    if (!ca)
        a = v[9999];
    random_shuffle(v.begin(), v.end());
    for (int i = 0; i < 9999; i++)
    {
        cout << "? B " << v[i] << endl;
        cin >> r;
        if (r)
        {
            b = v[i];
            cb = true;
            break;
        }
    }
    if (!cb)
        a = v[9999];
    cout << "! " << a + b;

    return 0;
}