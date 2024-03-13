// problem: Virus
// id: 13775
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;
    cin.ignore();
    string s;
    getline(cin, s);
    for (auto i : s)
    {
        if (isalpha(i))
        {
            if (i - k < 'a')
                cout << char(i - k + 26);
            else
                cout << char(i - k);
            k++;
            if (k > 25)
                k = 1;
        }
        else
            cout << i;
    }

    return 0;
}