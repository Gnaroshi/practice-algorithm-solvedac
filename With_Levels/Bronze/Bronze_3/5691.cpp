// problem: Mean Median Problem
// id: 5691
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{

    double a, b;
    while (true)
    {
        cin >> a >> b;
        if (a + b == 0)
            break;
        printf("%.0lf\n", min(min(2 * b - a, 2 * a - b), (a + b) / 2));
    }

    return 0;
}
