// problem: Message Decowding
// id: 27058
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string d, s;
    cin >> d;
    cin.ignore();
    getline(cin, s);
    for (auto i : s)
    {
        if (isalpha(i))
        {
            if (isupper(i))
                cout << char(d[i - 'A'] - 'a' + 'A');
            else
                cout << char(d[i - 'a']);
        }
        else
            cout << i;
    }

    return 0;
}