// problem: Anagram Checker
// id: 6843
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    getline(cin, a);
    getline(cin, b);
    int ca[26] = {0}, cb[26] = {0};
    for (auto i : a)
        ca[i - 'A']++;
    for (auto i : b)
        cb[i - 'A']++;
    for (int i = 0; i < 26; i++)
    {
        if (ca[i] != cb[i])
        {
            cout << "Is not an anagram.";
            return 0;
        }
    }
    cout << "Is an anagram.";

    return 0;
}