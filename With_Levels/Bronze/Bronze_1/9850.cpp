// problem: Cipher
// id: 9850
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string cm = "CHIPMUNKS", li = "LIVE";
    // 105 44
    string s;
    getline(cin, s);
    for (int i = 0; i < 26; i++)
    {
        string t = "";
        for (auto j : s)
        {
            if (isalpha(j))
                t += char((j - 'A' + i) % 26 + 'A');
            else
                t += j;
        }
        if (t.find(cm) != string::npos && t.find(li) != string::npos)
        {
            cout << t;
            break;
        }
    }

    return 0;
}