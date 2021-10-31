#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a=0,b=0;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            int c;
            cin>>c;
            if(c==1)
                a++;
            else 
                b++;
        }
        if(b>=n/2)
        {
            cout<<n/2<<endl;
            for(int i=0; i<n/2; i++)
                cout<<0<<" ";
        }
        else 
        {
            if(a%2!=0)
            {
                a--;
            }
            cout<<a<<endl;
            for(int i=0; i<a; i++)
                cout<<1<<" ";
        }
        cout<<endl;
    }
}