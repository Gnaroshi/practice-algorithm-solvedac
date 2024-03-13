// problem: A번 - Welcome to SMUPC!
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = "WelcomeToSMUPC";
    int n;
    cin >> n;
    cout << s[(n - 1) % 14];

    return 0;
}