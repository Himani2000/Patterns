#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    cout<<"1"<<endl;
    for(i=1;i<=n-1;i++)
    {
    for(j=1;j<=i+1;j++)
      {
        if(j==1)
            cout<<i;
        if(j<=i-1)
            cout<<"0";
        if(j==i)
            cout<<i;
      }
        cout<<endl;
    }
}



