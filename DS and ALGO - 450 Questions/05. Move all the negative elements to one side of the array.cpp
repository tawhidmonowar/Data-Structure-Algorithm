#include <iostream>
#include <vector>
#define loop(a,b) for(a;a<b;a++)
using namespace std;

int main()
{
    int i,x[10]={-1,5,8,-8,-2,4,-2,-3,5,7};
    vector<int> v;

    i=0;
    loop(i,10)
    {
        if(x[i]<0)
        {
            v.push_back(x[i]);

        }
    }

    i=0;
    loop(i,10)
    {
        if(x[i]>0)
        {
            v.push_back(x[i]);

        }
    }

    i=0;
    loop(i,10)
    {
        cout << v[i];
    }

    return 0;
}
