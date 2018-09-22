#include<iostream>
using namespace std;
int main()
{

    int i,j,k,n,newi,hn;
    cin>>n;
    if(n%2!=0)
    {hn=(n+1)/2;
    for(i=1;i<=n;i++)
    {
        if(i<=hn)
            newi=i;
        else
            newi=newi-1;

        for(k=1;k<=n-newi;k++)
            cout<<" ";
        for(j=1;j<=2*newi-1;j++)
        {
            cout<<"\t";
            cout<<"*";
        }
        }cout<<endl;
    }
}



