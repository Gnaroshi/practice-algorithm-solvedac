#include <iostream>
using namespace std;

int main(void)
{
    int n; cin>>n;
    int creator = 0;
    int tempCreator = creator;
    int sum = 0;
    while(creator < n)
    {
        tempCreator = creator;
        sum = 0;

        while(tempCreator > 0)
        {
            sum += tempCreator % 10;
            tempCreator = (int) tempCreator / 10;
        }

        if (n == (creator + sum))
        {
            break;
        }
        creator++;
    }

    if (creator == n)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<creator<<endl;
    }
    

    return 0;
}