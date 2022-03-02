#include <iostream>
using namespace std;

int binarySearch(int x[],int key)
{
    int left=0,right=10;

    while (right>=left)
    {
        int mid=(left+right)/2;
        if(key==x[mid])
        {
            return mid;

        }else if (key<mid)
        {
            right=mid-1;
            mid=(left+right)/2;

        }else
        {
            left=mid+1;
            mid=(left+right)/2;
        }
    }
}

int main()
{
    int x[]= {2,4,6,8,10,12,14,16,18,19,20};
    int key;

    cin >> key;
    cout << binarySearch(x,key);

    return 0;
}
