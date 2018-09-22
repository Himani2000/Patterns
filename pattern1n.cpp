#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
       {
        for(j=1;j<=i;j++)
            cout<<"1";
        }
        else
        {

            cout<<"1";
            for(int k=1;k<=i-2;k++)
                cout<<"0";

           cout<<"1";
        }
        cout<<endl;
    }
}


