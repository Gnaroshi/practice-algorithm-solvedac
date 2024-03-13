#include <bits/stdc++.h>
using namespace std;

#define PI 3.141592

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double d1, d2;
    double ans = 1;
    cin >> d1 >> d2;
    printf("%.6lf", d1 * 2 + ans * 2 * PI * d2);

    return 0;
}