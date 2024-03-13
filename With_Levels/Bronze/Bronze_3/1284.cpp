#include <bits/stdc++.h>
using namespace std;

int get_width(string s)
{
    int len_s = s.length();
    int return_value = 1;
    for (int i = 0; i < len_s; i++)
    {
        if (s[i] - '0' == 1)
            return_value += 2;
        else if (s[i] - '0' == 0)
            return_value += 4;
        else
            return_value += 3;
        return_value += 1;
    }
    return return_value;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    while (true)
    {
        string temp;
        cin >> temp;
        if (temp.length() == 1 && temp[0] == '0')
            break;
        cout << get_width(temp) << '\n';
    }

    return 0;
}
