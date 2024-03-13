#include <iostream>
using namespace std;

int main(void)
{
    long l; cin>>l;
    string inputString; cin>>inputString;
    long r = 31;
    long m = 1234567891;
    long long tempR = 1;
    long long output = 0;

    for (int i = 0; i < l; i++)
    {
        output = (output + ((inputString[i] - 'a' + 1) * tempR)) % m;
        tempR = (tempR * r) % m;
    }
    cout<<output<<endl;
    return 0;
}