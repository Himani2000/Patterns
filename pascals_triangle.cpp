#include <iostream>
using namespace std;

int Factorial (int n){
    int f=1;
    for (int i=1;i<=n;i++) f*=i;
    return f;
}

int NCR (int n, int r){
    int ans;
    ans=Factorial(n)/(Factorial(r)*Factorial(n-r));
    return ans;
}

int main(){
    int i,j,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
            cout<<NCR(i,j)<<"\t";
         cout<<endl;
        }

}

