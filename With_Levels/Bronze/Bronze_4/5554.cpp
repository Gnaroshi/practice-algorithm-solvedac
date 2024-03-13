#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int times[4];
    int total = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> times[i];
        total += times[i];
    }

    int second = total % 60;
    int hour = (total - second) / 60;
    cout << hour << '\n'
         << second << '\n';
    return 0;
}