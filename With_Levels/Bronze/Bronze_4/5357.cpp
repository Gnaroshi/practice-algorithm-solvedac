// problem: Dedupe
// id: 5357
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
        int iter = temp.length();
        if (iter == 1)
        {
            cout << temp[0];
            continue;
        }
        temp.push_back('.');
        iter++;
        for (int i = 0; i < iter - 1; i++)
        {
            if (temp[i] != temp[i + 1])
                cout << temp[i];
        }

        cout << '\n';
    }

    return 0;
}