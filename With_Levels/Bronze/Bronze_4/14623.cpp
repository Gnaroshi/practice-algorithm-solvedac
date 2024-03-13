#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b;
    cin >> a >> b;
    long long int_a = 0;
    long long int_b = 0;
    long long adder = 1;
    for (int i = a.length() - 1; i >= 0; i--)
    {
        if (a[i] == '1')
            int_a += adder;
        adder *= 2;
    }
    adder = 1;
    // cout << int_a << '\n';
    for (int i = b.length() - 1; i >= 0; i--)
    {
        if (b[i] == '1')
            int_b += adder;
        adder *= 2;
    }
    long long int_ans = int_a * int_b;
    // cout << int_ans << '\n';
    string ans = "";
    while (int_ans > 0)
    {
        if (int_ans % 2 == 0)
            ans += '0';
        else
            ans += '1';
        int_ans /= 2;
    }
    for (int i = ans.length() - 1; i >= 0; i--)
    {
        cout << ans[i];
    }
    return 0;
}