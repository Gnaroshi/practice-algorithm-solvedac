#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, s;
    cin >> l >> s;
    if (s - l > 30)
        cout << "You are speeding and your fine is $500.";
    else if (s - l > 20 && s - l < 31)
        cout << "You are speeding and your fine is $270.";

    else if (s - l > 0 && s - l < 21)
        cout << "You are speeding and your fine is $100.";
    else
        cout << "Congratulations, you are within the speed limit!";

    return 0;
}