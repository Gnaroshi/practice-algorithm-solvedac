// problem: Squares
// id: 6887
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, t, d;
    t = 0.0;
    cin >> a;
    modf(sqrt(a), &t);
    cout << "The largest square has side length " << t << '.';

    return 0;
}