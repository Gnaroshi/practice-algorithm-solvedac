// problem: ビ太郎と IOI (Bitaro and IOI)
// id: 24073
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'I')
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] == 'O')
                {
                    for (int k = j + 1; k < n; k++)
                    {
                        if (s[k] == 'I')
                        {
                            cout << "Yes";
                            return 0;
                        }
                    }
                }
            }
        }
    }
    cout << "No";
    return 0;
}