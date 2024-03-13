#include <iostream>
using namespace std;

int main(void)
{
    long n; cin>>n;
    long tempN = n;
    long counter = 0;
    int rooms = 1;
    if (n == 1)
    {
        rooms = 1;
    }
    else
    {
        while (tempN > 1)
            {
                counter = counter + 6;
                tempN = tempN - counter;
                rooms++;
                if (tempN <= 0)
                {
                    break;
                }
            }
    }
    cout<<rooms<<endl;
    return 0;
}