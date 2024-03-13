// problem: Football Team
// id: 5358
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (!cin.eof())
    {
        string temp;
        getline(cin, temp);
        int iter = temp.length();
        for (int i = 0; i < iter; i++)
        {
            if (temp[i] == 'i')
                cout << 'e';
            else if (temp[i] == 'e')
                cout << 'i';
            else if (temp[i] == 'E')
                cout << 'I';
            else if (temp[i] == 'I')
                cout << 'E';
            else
                cout << temp[i];
        }
        cout << '\n';
    }

    return 0;
}