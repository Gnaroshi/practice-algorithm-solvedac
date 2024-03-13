// problem: A Cat on a Keyboard
// id: 8345
// time taken:
#include <bits/stdc++.h>
using namespace std;

string kb[5] = {
    "`1234567890-=",
    "QWERTYUIOP[]\\",
    "ASDFGHJKL;'",
    "ZXCVBNM,./",
    " "};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    for (auto i : s)
    {
        for (int j = 0; j < 5; j++)
        {
            if (kb[j].find(i) != string::npos)
            {
                cout << j + 1;
                break;
            }
        }
    }

    return 0;
}
