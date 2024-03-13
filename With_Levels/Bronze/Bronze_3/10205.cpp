// problem: 헤라클레스와 히드라
// id: 10205
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;
    for (int i = 1; i <= k; i++)
    {
        int h;
        cin >> h;
        string s;
        cin >> s;
        int iter = s.length();
        for (int i = 0; i < iter; i++)
        {
            if (s[i] == 'c')
                h++;
            else
                h--;
        }
        cout << "Data Set " << i << ":\n"
             << h << "\n\n";
    }

    return 0;
}