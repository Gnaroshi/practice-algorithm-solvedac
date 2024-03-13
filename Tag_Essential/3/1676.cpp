#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 2; i <= n; i++)
    {
        int temp;
        temp = i;
        while (temp > 0)
        {
            if (temp % 5 == 0)
            {
                cnt++;
                temp /= 5;
            }
            else
                break;
        }
    }
    cout << cnt << '\n';
    return 0;
}