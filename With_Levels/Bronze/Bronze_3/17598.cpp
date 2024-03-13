// problem: Animal King Election
// id: 17598
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 0;
    string s;
    for (int i = 0; i < 9; i++)
    {
        cin >> s;
        if (s[0] == 'L')
            t++;
        else
            t--;
    }
    if (t > 0)
        cout << "Lion";
    else
        cout << "Tiger";

    return 0;
}