// problem: Gorivo
// id: 14065
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    const double g = 3.785411784;
    const double m = 1609.344;
    double x;
    cin >> x;
    printf("%.10lf", 100000.0 * g / m / x);

    return 0;
}