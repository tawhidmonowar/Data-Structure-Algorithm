#include<bits/stdc++.h>
using namespace std;

string reverseWord(string str);

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin >> s;

        cout << reverseWord(s) << endl;
    }
    return 0;

}

string reverseWord(string str)
{

    int i,strLen;
    strLen = str.length();

    for(i=strLen-1; i>=0; i--)
    {
        cout << str[i];
    }
}
