// problem: Jean and Joe’s Clothes
// id: 5100
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        int j[5] = {0};
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            if (isalpha(s[0]))
            {
                char c = s[0];
                if (c == 'S')
                    j[3]++;
                else if (c == 'X')
                    j[4]++;
                else
                    j[0]++;
            }
            else
            {
                int sz = stoi(s);
                if (sz >= 12)
                    j[1]++;
                else
                    j[2]++;
            }
        }
        for (int i = 0; i < 5; i++)
            cout << j[i] << ((i < 4) ? " " : "\n");
    }

    return 0;
}