// problem: Quadrants
// id: 9772
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    while (true)
    {
        double a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
        {
            cout << "AXIS";
            break;
        }
        if (a == 0 || b == 0)
            cout << "AXIS";
        else
        {
            if (a < 0)
            {
                if (b < 0)
                    cout << "Q3";
                else
                    cout << "Q2";
            }
            else
            {
                if (b < 0)
                    cout << "Q4";
                else
                    cout << "Q1";
            }
        }
        cout << '\n';
    }

    return 0;
}