#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    int commands;
    cin >> commands;
    list<char> lst;
    for (int i = 0; i < s.length(); i++)
    {
        lst.push_back(s[i]);
    }

    char command;
    char commandChar;

    list<char>::iterator cursor = lst.end();

    while (commands--)
    {
        cin >> command;
        if (command == 'P')
        {
            cin >> commandChar;
            lst.insert(cursor, commandChar);
        }
        else if (command == 'L')
        {
            if (cursor != lst.begin())
                cursor--;
        }
        else if (command == 'D')
        {
            if (cursor != lst.end())
                cursor++;
        }
        else if (command == 'B')
        {
            if (cursor != lst.begin())
            {
                cursor--;
                cursor = lst.erase(cursor);
            }
        }
    }
    for (auto c : lst)
    {
        cout << c;
    }

    return 0;
}