#include bitsstdc++.h
using namespace std;

int main()
{
    int x[]= {5,7,1,3,2};
    int y[]= {1,8,2,9,3};
    setints;
    int i,j;

    cout  Intersection ;
    for(i=0; i5; i++)
    {
        for(j=0; j5; j++)
        {
            if(x[i]==y[j])
            {
                cout  y[j]   ;
            }
        }
    }

    cout  nUnion ;

    for(i=0; i5; i++)
    {
        s.insert(x[i]);
    }

    for(j=0; j5; j++)
    {
        s.insert(y[j]);
    }

    for (auto it = s.begin(); it !=
            s.end(); ++it)
        cout  ' '  it;

    return 0;
}
