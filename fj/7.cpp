#include<iostream>
using namespace std;
int main()
{
    int a,i,b[a],j;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        cin>>b[i];
    }
    for(i=1;i<=a;i++)
    {
        for(j=i+1;j<=a;j++)
        {
            if(b[i]==b[j])
                b[i]=-1000;
        }
    }
    int l,c[l],t;
    for(i=1;i<=a;i++)
    {
        if(b[i]!=-1000)
        {
            l+=1;
            c[l]=b[i];
        }
    }
    for(i=1;i<=l;i++)
    {
        for(j=i+1;j<=l;j++)
        {
            if(c[i]>=c[j])
                t=c[i];
                c[i]=c[j];
                c[j]=t;
        }
    }
    cout<<l<<endl;
    for(i=1;i<=l;i++)
    {
        cout<<c[l];
    }
    return 0;
}
