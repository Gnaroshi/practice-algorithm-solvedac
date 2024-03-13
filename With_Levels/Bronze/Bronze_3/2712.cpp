#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed;
    cout.precision(4);

    int tc;
    cin >> tc;
    while (tc--)
    {
        double temp;
        string u;
        cin >> temp >> u;
        if (u == "kg")
        {
            cout << temp * 2.2046 << " lb\n";
        }
        else if (u == "lb")
        {
            cout << temp * 0.4536 << " kg\n";
        }
        else if (u == "l")
        {
            cout << temp * 0.2642 << " g\n";
        }
        else if (u == "g")
        {
            cout << temp * 3.7854 << " l\n";
        }
    }

    return 0;
}