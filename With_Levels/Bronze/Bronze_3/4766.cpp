// problem: 일반 화학 실험
// id: 4766
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    double bef, t;
    cin >> bef;
    cout << fixed;
    cout.precision(2);
    while (true)
    {
        cin >> t;
        if (t == 999)
            break;
        cout << t - bef << '\n';
        bef = t;
    }
    return 0;
}