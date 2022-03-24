#include <iostream>
using namespace std;

int main()
{
    int i,minX,maxX,arr[5]={0,5,1,2,9};

    minX=arr[0];
    maxX=arr[0];

    for(i=0;i<5;i++)
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
