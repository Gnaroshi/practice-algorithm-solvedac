#include <iostream>
using namespace std;

int main(void)
{
    string s; cin>>s;
    int alphabets[26];
    for (int i = 0; i < 26; i++)
    {
        alphabets[i] = -1;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (alphabets[s[i] - 97] == -1)
        {
            alphabets[s[i] - 97] = i;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        cout<<alphabets[i]<<" ";
    }

    return 0;
}