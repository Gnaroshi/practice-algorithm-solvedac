#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    string words; cin>>words;
    transform(words.begin(), words.end(), words.begin(), [](unsigned char c){return toupper(c);});
    int *alphabets = (int*)malloc(sizeof(int) * 26);
    for (int i = 0; i < 26; i++)
    {
        alphabets[i] = 0;
    }
    for (int i = 0; i < words.length(); i++)
    {
        alphabets[words[i] - 65]++;
    }

    int max = -1;
    int loc = -1;
    bool dup = false;
    
    for (int i = 0; i < 26; i++)
    {
        if (alphabets[i] > max)
        {
            max = alphabets[i];
        }
    }
    
    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (alphabets[i] == max)
        {
            count++;
            loc = i;
        }
    }
    if (count >= 2)
    {
        dup = true;
    }

    if(dup == true)
    {
        cout<<"?"<<endl;
    }
    else
    {
        cout<<(char)(loc+65)<<endl;
    }
    return 0;
}