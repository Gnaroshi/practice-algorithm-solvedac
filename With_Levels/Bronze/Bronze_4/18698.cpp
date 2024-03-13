// problem: The Walking Adam
// id: 18698
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        string temp;
        cin >> temp;
        int ans = 0;
        int iter = temp.length();
        for (int i = 0; i < iter; i++)
        {
            if (temp[i] == 'U')
                ans++;
            else
                break;
        }
        cout << ans << '\n';
    }

    return 0;
}