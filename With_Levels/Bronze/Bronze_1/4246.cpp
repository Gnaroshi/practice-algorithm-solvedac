// problem: To and Fro
// id: 4246
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
        string s;
        cin >> s;
        int iter = s.length(), row = iter / n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < row; j++)
            {
                if (j % 2)
                {
                    if ((j + 1) * n - 1 - i >= iter)
                        break;
                    cout << s[(j + 1) * n - 1 - i];
                }
                else
                {
                    if (j * n + i >= iter)
                        break;
                    cout << s[j * n + i];
                }
            }
        }
        cout << '\n';
    }
    return 0;
}