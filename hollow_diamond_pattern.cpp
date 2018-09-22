#include <iostream>
using namespace std;

int main(){
    int n,hn; cin>>n;
    int eqi;
    if(n%2!=0)
    {
     hn=(n+1)/2;

    for (int i=1;i<=n;i=i+1){
        if (i<=hn) eqi=i; else eqi=2*hn-i;
        ///print stars
        for (int j=1;j<=hn-eqi+1;j=j+1)
        {
            cout<<"\t";
            cout<<"*";
        }//print saces
        for (int j=1;j<=2*eqi-3;j=j+1) cout<<"\t";
        ///print stars
        int NoOfStars=hn-eqi+1;
        ///if (eqi==1) NoOfStars=NoOfStars-1;
        for (int j=1;j<=NoOfStars;j=j+1) {
            if ((eqi!=1) || (eqi==1 && j!=1))
            {
                cout<<"\t";
                cout<<"*";
            }
        }
        ///new line;
        cout<<endl;
    }


    }

}

