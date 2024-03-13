#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int tcn; cin>>tcn;
    string inputString; cin>>inputString;
    int sum = 0;

    for (int i = 0; i < tcn; i++)
    {
        sum += stoi(to_string(inputString[i])) - 48;
    }

    cout<<sum;

    return 0;    
}