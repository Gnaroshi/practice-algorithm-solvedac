#include <iostream>

using namespace std;

int main(void)
{
    string a, b;
    int alphaA[26] = { 0 };
    int alphaB[26] = { 0 };

    cin>>a>>b;

    for (int i = 0; i < a.length(); i++) alphaA[a[i] - 97]++;
    for (int i = 0; i < b.length(); i++) alphaB[b[i] - 97]++;

    bool isAnagram;
    int cnt = 0;
    int maxCnt = a.length() + b.length();
    while(true)
    {
        isAnagram = true;
        for (int i = 0; i < 26; i++)
        {
            if(alphaA[i] != alphaB[i])
            {
                if(alphaA[i] > alphaB[i])
                {
                    alphaA[i]--;
                }
                else
                {
                    alphaB[i]--;
                }
                cnt++;
                isAnagram = false;
                break;
            }
        }
        if (isAnagram == true) break;
        if (cnt == maxCnt) break;
    }
    cout<<cnt<<"\n";
    return 0;
}