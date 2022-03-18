#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    cin >> x;
    int i,xLen = x.length();
    for(i=xLen-1;i>=0;i--)
    {
        cout << x[i];
    }

    return 0;
}
