#include <iostream>
using namespace std;

int main(void)
{
    int tcn; cin>>tcn;
    string inputString; 

    int score = 0;
    int counter = 0;
    int *scores = (int*)malloc(sizeof(int) * tcn); 


    for (int j = 0; j < tcn; j++)
    {
        cin>>inputString;
        for (int i = 0; i < inputString.length(); i++)
        {
            if (inputString[i] == 'O')
            {
                counter++;
                score += counter;
            }
            else if (inputString[i] == 'X')
            {
                counter = 0;
            }
        }
        scores[j] = score;
        score = 0;
        counter = 0;
    }

    for (int i = 0; i < tcn; i++)
    {
        cout<<scores[i]<<endl;
    }

    return 0;

}