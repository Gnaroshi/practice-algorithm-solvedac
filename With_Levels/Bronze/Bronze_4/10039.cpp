#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int temp;
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> temp;
        if (temp < 40)
            temp = 40;
        sum += temp;
    }
    cout << sum / 5 << '\n';
    return 0;
}