// problem: Secret Location
// id: 5340
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x[6];
    string s;
    for (int i = 0; i < 6; i++)
    {
        getline(cin, s);
        x[i] = s.length();
        if (s[s.length() - 1] == ' ')
            x[i]--;
    }
    cout << "Latitude " << x[0] << ":" << x[1] << ":" << x[2] << '\n';
    cout << "Longitude " << x[3] << ":" << x[4] << ":" << x[5] << '\n';

    return 0;
}