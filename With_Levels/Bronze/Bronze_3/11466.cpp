// problem: Alex Origami Squares
// id: 11466
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    double h, w;
    scanf("%lf %lf", &h, &w);
    if (h < w)
        swap(h, w);
    printf("%.6lf", max(h / 3 <= w ? h / 3 : w, w / 2));

    return 0;
}