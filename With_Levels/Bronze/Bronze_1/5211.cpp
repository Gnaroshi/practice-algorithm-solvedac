#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    // ADE - A-minor
    // CFG - C-major
    int cnt_a = 0;
    int cnt_c = 0;
    int isF = true;
    int iter = s.length();
    for (int i = 0; i < iter; i++)
    {
        if (isF)
        {
            if (s[i] == 'A' || s[i] == 'D' || s[i] == 'E')
                cnt_a++;
            else if (s[i] == 'C' || s[i] == 'F' || s[i] == 'G')
                cnt_c++;
            isF = false;
        }
        if (s[i] == '|')
            isF = true;
    }

    if (cnt_a > cnt_c)
        cout << "A-minor\n";
    else if (cnt_a < cnt_c)
        cout << "C-major\n";
    else
    {
        int last = iter - 1;
        if (s[last] == 'A' || s[last] == 'D' || s[last] == 'E')
            cout << "A-minor\n";
        else if (s[last] == 'C' || s[last] == 'F' || s[last] == 'G')
            cout << "C-major\n";
    }

    return 0;
}