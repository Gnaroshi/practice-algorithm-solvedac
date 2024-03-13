// problem: Skarpetki
// id: 26742
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int iter = s.length();
    int b, c;
    b = c = 0;
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == 'B')
            b++;
        else
            c++;
    }
    cout << b / 2 + c / 2;

    return 0;
}