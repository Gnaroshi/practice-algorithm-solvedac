#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int alp[26];

    while (true)
    {
        fill(alp, alp + 26, 0);
        string temp;
        getline(cin, temp);
        if (temp.length() == 1 && temp[0] == '#')
            break;
        for (int i = 0; i < temp.length(); i++)
        {
            if ('a' <= temp[i] && temp[i] <= 'z')
            {
                alp[temp[i] - 'a']++;
            }
            else if ('A' <= temp[i] && temp[i] <= 'Z')
            {
                alp[temp[i] - 'A']++;
            }
        }
        cout << alp[0] + alp[4] + alp[8] + alp[14] + alp[20] << '\n';
    }

    return 0;
}