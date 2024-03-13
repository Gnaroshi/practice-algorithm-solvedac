// problem: КУРИЕРИ
// id: 24302
// time taken:
#include <bits/stdc++.h>
using namespace std;

double fst(int n)
{
    int t = (n - n % 1000) / 1000;
    if (t <= 5)
        return 400;
    else if (5 < t && t <= 10)
        return 700;
    else if (10 < t && t <= 20)
        return 1200;
    else if (20 < t && t <= 30)
        return 1700;
    else
        return t * 57;
}
double snd(int n)
{
    int t = (n - n % 1000) / 1000;
    if (t <= 2)
        return 90 + t * 90;
    else if (2 < t && t <= 5)
        return 100 + t * 85;
    else if (5 < t && t <= 20)
        return 125 + t * 80;
    else if (20 < t && t <= 40)
        return 325 + t * 70;
    else
        return 925 + t * 55;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    double da = fst(a) / 100, db = fst(b) / 100;
    double das = snd(a) / 100, dbs = snd(b) / 100;

    printf("%.2lf", min(da, das) + min(db, dbs));

    return 0;
}