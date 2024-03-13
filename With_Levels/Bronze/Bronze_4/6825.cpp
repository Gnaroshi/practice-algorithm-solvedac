// problem: Body Mass Index
// id: 6825
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b, c;
    cin >> a >> b;
    c = a / b / b;
    if (c > 25)
        cout << "Overweight";
    else if (c < 18.5)
        cout << "Underweight";
    else
        cout << "Normal weight";

    return 0;
}