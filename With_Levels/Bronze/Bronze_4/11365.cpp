#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    while (true)
    {
        string temp;
        getline(cin, temp);
        if (temp == "END")
            break;
        else
        {
            for (int i = temp.length() - 1; i >= 0; i--)

            {
                cout << temp[i];
            }
            cout << '\n';
        }
    }
    return 0;
}