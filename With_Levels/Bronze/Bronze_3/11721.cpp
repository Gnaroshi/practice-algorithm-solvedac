#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    string temp;
    cin >> temp;
    int cnt = 0;
    if (temp.length() != 0)
    {
        int iter = temp.length() / 10 + 1;
        for (int i = 0; i < iter; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (cnt < temp.length())
                    cout << temp[i * 10 + j];
                else
                    break;
                cnt++;
            }
            cout << '\n';
        }
    }

    return 0;
}