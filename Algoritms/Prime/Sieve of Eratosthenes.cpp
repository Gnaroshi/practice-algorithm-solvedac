#include <bits/stdc++.h>
using namespace std;
const int SIZE = 100000;
bool isp[SIZE];
void ES(int n)
{
    fill(isp, isp + SIZE, 1);
    for (int i = 2; i <= n; i++)
    {
        if (isp[i])
        {
            for (int j = 2; j * i <= n; j++)
                isp[j * i] = 0;
        }
    }
    return;
}

int main(void)
{
    int n;
    cin >> n;
    ES(n);
    for (int i = 1; i <= n; i++)
        cout << isp[i] << ' ';

    return 0;
}