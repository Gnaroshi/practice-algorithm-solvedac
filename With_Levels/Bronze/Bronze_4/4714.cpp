#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        double temp;
        cin >> temp;
        if (temp < 0)
            break;
        printf("Objects weighing %.2lf on Earth will weigh %.2lf on the moon.\n", temp, temp * 0.167);
    }

    return 0;
}