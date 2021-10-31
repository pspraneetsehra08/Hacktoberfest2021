#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int a=0,b=0;
    for(int i=0; i<n-1; i++)
    {
        if(str[i]=='S' && str[i+1]=='F')
            a++;
        if(str[i]=='F' && str[i+1]=='S')
            b++;
    }
    if(a>b)
        cout<<"YES";
    else 
        cout<<"NO";
}