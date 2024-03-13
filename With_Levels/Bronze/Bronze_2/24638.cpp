// problem: Anno Domini 2022
// id: 24638
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, aa, b, bb;
    cin >> a >> aa >> b >> bb;
    if (isdigit(a[0]))
    {
        if (isdigit(b[0]))
            cout << abs(stoi(a) - stoi(b));
        else
            cout << abs(stoi(a) + stoi(bb)) - 1;
    }
    else
    {
        if (isdigit(b[0]))
            cout << abs(stoi(aa) + stoi(b)) - 1;
        else
            cout << abs(stoi(aa) - stoi(bb));
    }

    return 0;
}