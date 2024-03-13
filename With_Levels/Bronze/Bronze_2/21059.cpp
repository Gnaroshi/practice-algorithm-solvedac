// problem: Methodic Multiplication
// id: 21059
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;
    if (a == "0" || b == "0")
    {
        cout << 0;
    }
    else
    {
        int ca = 0, cb = 0, iter;
        for (auto i : a)
            if (i == 'S')
                ca++;
        for (auto i : b)
            if (i == 'S')
                cb++;
        iter = ca * cb;
        for (int i = 0; i < iter; i++)
            cout << "S(";
        cout << "0";
        for (int i = 0; i < iter; i++)
            cout << ")";
    }

    return 0;
}