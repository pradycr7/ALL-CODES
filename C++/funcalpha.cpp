#include <iostream>
#include <math.h>
using namespace std;

void isalpha(char ch)
{
    int chaar = int(ch);
    int temp;

    for (int i = 65; i <= 90; i++)
    {
        if (i == chaar)
        {
            temp = 1;
        }
    }
    if (temp == 1)
        cout << "capital alphabet";
    
int count;
    for (int i = 97; i <= 122; i++)
    {
        if (i == chaar)
        {
            count = 1;
        }
    }
    if (count == 1)
        cout << "small alphabet";

    if (temp!=1 && count!=1)
    
        cout<<"fuck off";
    
    
   

    return;
}

int main()
{
    char c;
    cin >> c;

    isalpha(c);

    return 0;
}