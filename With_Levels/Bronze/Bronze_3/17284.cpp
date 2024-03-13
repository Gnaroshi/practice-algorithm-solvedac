// problem: Vending Machine
// id: 17284
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    int iter = s.length();
    int ans = 50;
    for (int i = 0; i < iter; i += 2)
    {
        if (s[i] == '1')
            ans -= 5;
        else if (s[i] == '2')
            ans -= 8;
        else if (s[i] == '3')
            ans -= 10;
    }
    cout << ans * 100;

    return 0;
}