// problem: Splitology
// id: 27627
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
    for (int i = 1; i < iter; i++)
    {
        bool a, b;
        a = b = true;
        for (int j = 0; j < i; j++)
        {
            if (s[j] != s[i - j - 1])
            {
                a = false;
                break;
            }
        }
        for (int j = i; j < iter; j++)
        {
            if (s[j] != s[iter - j + i - 1])
            {
                b = false;
                break;
            }
        }
        if (a && b)
        {
            for (int j = 0; j < i; j++)
                cout << s[j];
            cout << ' ';
            for (int j = i; j < iter; j++)
                cout << s[j];
            return 0;
        }
    }
    cout << "NO";

    return 0;
}