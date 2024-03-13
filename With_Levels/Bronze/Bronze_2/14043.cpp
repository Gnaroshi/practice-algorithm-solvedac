// problem: Ragaman
// id: 14043
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    int ca[26] = {0}, cb[26] = {0}, wd = 0;
    cin >> a >> b;
    for (auto i : a)
        ca[i - 'a']++;
    for (auto i : b)
    {
        if (i == '*')
        {
            wd++;
            continue;
        }
        cb[i - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (ca[i] != cb[i])
        {
            if (ca[i] < cb[i])
            {
                cout << "N";
                return 0;
            }
            else if (wd < ca[i] - cb[i])
            {
                cout << "N";
                return 0;
            }
            wd -= ca[i] - cb[i];
        }
    }
    cout << "A";

    return 0;
}