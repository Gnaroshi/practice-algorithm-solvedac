#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string word; cin>>word;
    int *alphabets = new int(26);
    for (int i = 0; i < 26; i++) alphabets[i] = 0;
    for (int i = 0; i < word.length(); i++)
    {
        alphabets[word[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) cout<<alphabets[i]<<" ";
    cout<<endl;
    return 0;
}