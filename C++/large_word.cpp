#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char arr[n];
    cin.getline(arr, n);
    
    int instart = 0;
    int inend = 0;
    int count = 0, temp = 0;
    int i = 0;

    while (1)
    {

        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (count >= temp)
            {
                temp = count;
                count = 0;
                instart = i - temp;
                inend = i - 1;
            }
        }
        else
        {
            count++;
        }
        if (arr[i]=='\0')
        {
            break;
        }
        

        i++;
    }
    cout<<temp<<endl;

    for (int i = instart; i <= inend; i++)
    {
        cout << arr[i];
    }

    return 0;
}