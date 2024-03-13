// problem: Count Vowels
// id: 10203
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    string vw = "aeiou";
    while (tc--)
    {
        string s;
        cin >> s;
        int cnt = 0;
        for (auto i : s)
            cnt += (vw.find(i) != string::npos);
        cout << "The number of vowels in " << s << " is " << cnt << ".\n";
    }

    return 0;
}