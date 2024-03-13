// problem: 피카츄
// id: 14405
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int iter = s.length();
    bool isOk = true;
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == 'p' && i + 1 < iter)
        {
            if (s[i + 1] != 'i')
            {
                isOk = false;
                break;
            }
            i++;
        }
        else if (s[i] == 'k' && i + 1 < iter)
        {
            if (s[i + 1] != 'a')
            {
                isOk = false;
                break;
            }
            i++;
        }
        else if (s[i] == 'c' && i + 2 < iter)
        {
            if (s[i + 1] != 'h' || s[i + 2] != 'u')
            {
                isOk = false;
                break;
            }
            i += 2;
        }
        else
        {
            isOk = false;
            break;
        }
    }
    if (isOk)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}