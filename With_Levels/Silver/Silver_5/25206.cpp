// problem: 너의 평점은
// id: 25206
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double sum = 0;
    double cre = 0;
    double nums[9] = {
        0,
    };
    for (int i = 0; i < 20; i++)
    {
        string temp, g;
        double gi;
        cin >> temp >> gi >> g;
        if (g != "P")
            cre += gi;
        if (g == "A+")
            sum += gi * 4.5;
        else if (g == "A0")
            sum += gi * 4.0;
        else if (g == "B+")
            sum += gi * 3.5;
        else if (g == "B0")
            sum += gi * 3.0;
        else if (g == "C+")
            sum += gi * 2.5;
        else if (g == "C0")
            sum += gi * 2.0;
        else if (g == "D+")
            sum += gi * 1.5;
        else if (g == "D0")
            sum += gi * 1.0;
        else if (g == "F")
            sum += gi * 0.0;
    }

    cout << fixed;
    cout.precision(6);
    cout << sum / cre;

    return 0;
}