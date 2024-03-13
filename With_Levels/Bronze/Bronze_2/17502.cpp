// problem: 클레어와 팰린드롬
// id: 17502
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;
    int iter = n / 2;
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == '?' && s[n - i - 1] == '?')
            s[i] = s[n - i - 1] = 'a';
        else if (s[i] == '?')
            s[i] = s[n - i - 1];
        else if (s[n - i - 1] == '?')
            s[n - i - 1] = s[i];
    }
    if (n % 2 && s[iter] == '?')
        s[iter] = 'a';
    cout << s;

    return 0;
}