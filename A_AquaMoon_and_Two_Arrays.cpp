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
        int a[n];
        int b[n];
        int sa=0,sb=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sa+=a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            sb+=b[i];
        }
        if(sa!=sb)
            cout<<-1<<endl;
        else 
        {
            int c=0,d=0;
            for(int i=0; i<n; i++)
            {
                if(a[i]>b[i])
                {
                    c+=a[i]-b[i];
                }
                else 
                    d+=b[i]-a[i];
            }
            int e[c],f[c];
            int j=0,k=0;
            for(int i=0; i<n; i++)
            {
                while(a[i]>b[i])
                {
                    e[j]=i+1;
                    a[i]--;
                    j++;
                }
                while(b[i]>a[i])
                {
                    f[k]=i+1;
                    b[i]--;
                    k++;
                }

            }
            cout<<c<<endl;
            for(int i=0; i<c; i++)
            {
                cout<<e[i]<<" "<<f[i]<<endl;
            }
        }
    }
}