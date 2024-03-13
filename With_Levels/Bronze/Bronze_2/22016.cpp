// problem: 巻物 (Scroll)
// id: 22016
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    string s;
    cin >> n >> k >> s;
    k--;
    int iter = s.length();
    for (int i = 0; i < iter; i++)
    {
        if (i < k)
            cout << s[i];
        else
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                cout << char(s[i] - 'a' + 'A');
            else
                cout << char(s[i] - 'A' + 'a');
        }
    }

    return 0;
}