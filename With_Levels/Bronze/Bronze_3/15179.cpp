// problem: Golf Croquet
// id: 15179
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b, s;
    getline(cin, a);
    getline(cin, b);
    int n;
    int sc[2] = {0};
    cin >> n >> s;
    int iter = s.length();
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == 'H')
        {
            sc[i % 2]++;
        }
        else if (s[i] == 'D')
        {
            sc[i % 2] = min(sc[i % 2] + 2, 7);
        }
        else if (s[i] == 'O')
        {
            sc[!(i % 2)]++;
        }
        if (sc[0] == 7 || sc[1] == 7)
        {
            cout << a << ' ' << sc[0] << ' ' << b << ' ' << sc[1] << ". ";
            if (sc[0] == 7)
                cout << a << " has won.";
            else
                cout << b << " has won.";
            return 0;
        }
    }
    cout << a << ' ' << sc[0] << ' ' << b << ' ' << sc[1] << ". ";
    if (sc[0] > sc[1])
        cout << a << " is winning.";
    else if (sc[0] < sc[1])
        cout << b << " is winning.";
    else
        cout << "All square.";

    return 0;
}