// problem: Cutting Corners
// id: 20215
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    double w, h, dia;
    scanf("%lf %lf", &w, &h);
    dia = sqrt(w * w + h * h);
    printf("%.9lf", (abs(dia - w - h)));

    return 0;
}