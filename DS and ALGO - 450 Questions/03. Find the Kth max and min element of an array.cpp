#include <iostream>
using namespace std;

int main()
{
    int i,minX,maxX,sizeX;

    cout << "Enter the array Size: ";
    cin >> sizeX;
    int arr[sizeX];

    cout << "Enter The Elements of array: ";

    for(i=0;i<sizeX;i++)
    {
        cin >> arr[i];
    }

    minX=arr[0];
    maxX=arr[0];
    
    cout << "Enter the key: ";
    int key;
    cin >> key;

    for(i=0;i<key;i++)
    {
        if(arr[i]<minX)
        {
            minX=arr[i];
        }
        if(arr[i]>maxX)
        {
            maxX=arr[i];
        }
    }

    cout << "Min: " << minX << "\nMax: " << maxX;

    return 0;
}
