#include <iostream>

using namespace std;

int main(void)
{
    int tc; cin>>tc;
    int counter;
    string temp;
    while(tc--)
    {
        counter = 0;
        cin>>temp;
        for (int i = 0; i < temp.length(); i++)
        {
            if (temp[i] == '(') counter++;
            else counter--;
        }
        if (counter != 0) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}