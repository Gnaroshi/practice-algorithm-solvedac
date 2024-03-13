// problem: Covid-19
// id: 20673
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p, q;
    cin >> p >> q;
    if (q > 30)
        cout << "Red";
    else if (p <= 50 && q <= 10)
        cout << "White";
    else
        cout << "Yellow";

    return 0;
}