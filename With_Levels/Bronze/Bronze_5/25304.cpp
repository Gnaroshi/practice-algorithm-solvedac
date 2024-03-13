#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int x;
    int n;
    int temp_price;
    int temp_cnt;
    cin >> x >> n;
    int sum = 0;
    while (n--)
    {
        cin >> temp_price >> temp_cnt;
        sum += temp_price * temp_cnt;
    }
    if (sum == x)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}