#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int d[4];
    for (int i = 0; i < 4; i++)
        cin >> d[i];

    int det[4];
    fill(det, det + 4, 0);

    for (int i = 0; i < 3; i++)
    {
        if (d[i] - d[i + 1] > 0)
        {
            det[i] = 1;
        }
        else if (d[i] - d[i + 1] < 0)
        {
            det[i] = 2;
        }
    }

    if (det[0] == det[1] && det[1] == det[2])
    {
        if (det[0] == 1)
            cout << "Fish Diving";
        else if (det[0] == 2)
            cout << "Fish Rising";
        else
            cout << "Fish At Constant Depth";
    }
    else
        cout << "No Fish";

    return 0;
}