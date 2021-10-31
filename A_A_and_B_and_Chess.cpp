#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=64,w=0,b=0;
    while(n--)
    {
        char a;
        cin>>a;
        if(a=='Q')
            w+=9;
        if(a=='R')
            w+=5;
        if(a=='B')
            w+=3;
        if(a=='N')
            w+=3;
        if(a=='P')
            w+=1;
        if(a=='q')
            b+=9;
        if(a=='r')
            b+=5;
        if(a=='b')
            b+=3;
        if(a=='n')
            b+=3;
        if(a=='p')
            b+=1;
    }
    if(w>b)
        cout<<"White";
    else if(b>w)
        cout<<"Black";
    else 
        cout<<"Draw";
    
}