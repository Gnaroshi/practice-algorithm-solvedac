// problem: Hissing Microphone
// id: 15272
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
    char bef = s[0];
    for (int i = 1; i < iter; i++)
    {
        if (s[i] == bef && bef == 's')
        {
            cout << "hiss";
            return 0;
        }
        bef = s[i];
    }
    cout << "no hiss";
    return 0;
}