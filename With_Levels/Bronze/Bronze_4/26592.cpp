// problem: Triangle Height
// id: 26592
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{

    int tc;
    cin >> tc;
    while (tc--)
    {
        double a, b;
        scanf("%lf %lf", &a, &b);
        printf("The height of the triangle is %.2lf units\n", 2.0 * a / b);
    }

    return 0;
}