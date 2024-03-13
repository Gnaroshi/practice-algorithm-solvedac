// problem: Sveikas, Pasauli!
// id: 30075
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        int iter = b.length() - 1;
        for (int j = 1; j < iter; j++)
        {
            if (b[j] == '\\')
            {
                if (j < iter - 1)
                {
                    if (b[j + 1] == 'n')
                    {
                        cout << '\n';
                        j++;
                    }
                    else
                        cout << '\\';
                }
                else
                    cout << '\\';
            }
            else
                cout << b[j];
        }
    }

    return 0;
}