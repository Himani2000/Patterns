#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int a=0,b=1;
    for (int i=1;i<=n;i=i+1){
        for (int j=1;j<=i;j=j+1){
            cout<<a<<" ";
            int s=a+b;
            a=b;b=s;
        }
        cout<<endl;
    }

}



