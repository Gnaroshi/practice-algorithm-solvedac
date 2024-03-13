#include <iostream>
using namespace std;

int main(void)
{
    string tc;
    bool isPellindrom = true;
    while(true)
    {
        isPellindrom = true;
        cin>>tc;
        if(tc[0] == '0')
        {
            break;
        }
        for (int i = 0; i < tc.length() / 2; i++)
        {
            if(tc[i] != tc[tc.length() - i - 1])
            {
                isPellindrom = false;
            }
        }
        if (isPellindrom)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }

    return 0;
}