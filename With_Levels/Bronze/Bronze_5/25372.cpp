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
        int iter = temp.length();
        if (iter >= 6 && iter <= 9)
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}