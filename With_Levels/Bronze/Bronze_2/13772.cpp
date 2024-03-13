// problem: Holes
// id: 13772
// time taken:
#include <bits/stdc++.h>
using namespace std;

// ABCDEFGHIJKLMNOPQRSTUVWXYZ
// ADOPQR
// B
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();
    string s;
    while (n--)
    {
        getline(cin, s);
        int iter = s.length();
        int cnt = 0;
        for (int i = 0; i < iter; i++)
        {
            if (s[i] == 'A' || s[i] == 'D' || s[i] == 'O' || s[i] == 'P' || s[i] == 'Q' || s[i] == 'R')
                cnt++;
            else if (s[i] == 'B')
                cnt += 2;
        }
        cout << cnt << '\n';
    }

    return 0;
}