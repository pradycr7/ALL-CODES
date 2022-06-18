#include <iostream>
#include <climits>
using namespace std;

int record_break(int arr[], int n)
{
    int count = 0, temp = 0, lauda = 0,i;
    int mx=INT_MIN;
    for (int a = 0; a < n; a++)
    {
         int count = 0, temp = 0;
         
        if (arr[a] > mx)
            {
                count++;     
            }
            mx=max(mx,arr[a]);
            //OUR LOGIC

        /* for (i = a; i >= 0; i--)
        {
            if (arr[a] == arr[0])
            {

                count++;
            }

            if (arr[a] > arr[i])
            {
                continue;
            }
            else
            break;
        }
        if (i == -1)
        {
            count++;
        }
 */
        if (arr[a] == arr[n - 1] || arr[a] > arr[a + 1])
        {
            temp++;
        }

        if (count == temp && count>0 && temp>0)
        {
            lauda++;
        }
    }

    return lauda;
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The no. of record breaking days :" << endl;
    cout << record_break(arr, n);

    return 0;
}