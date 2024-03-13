#include <iostream>

using namespace std;

int main(void)
{
    int tc; cin>>tc;

    int alphaA[26] = {0};
    int alphaB[26] = {0};

    string tempStringA;
    string tempStringB;
    
    bool isStrfry;

    for (int i = 0; i < tc; i++)
    {
        isStrfry = true;
        for (int j = 0; j < 26; j++)
        {
            alphaA[j] = 0;
            alphaB[j] = 0;
        }

        cin>>tempStringA>>tempStringB;
        if(tempStringA.length() != tempStringB.length())
        {
            cout<<"Impossible\n";
            continue;
        }
        for (int j = 0; j < tempStringA.length(); j++)
        {
            alphaA[tempStringA[j] - 97]++;
            alphaB[tempStringB[j] - 97]++;
        }
        for (int j = 0; j < 26; j++)
        {
            if (alphaA[j] != alphaB[j])
            {
                isStrfry = false;
                break;
            }
        }

        if (isStrfry) cout<<"Possible\n";
        else cout<<"Impossible\n";
    }

    return 0;
}