#include<iostream>
using namespace std;


int fibonacci( int n){

    if(n==0){ return 0;}
    else if(n==1){ return 1;}
    int smallfiboncci1=fibonacci(n-1);
    int smallfiboncci2=fibonacci(n-2);
    return smallfiboncci1+  smallfiboncci2  ;

}

int main(){

    cout<<" we willl give you fibonacci nth term"<<endl;
    int n;
    cin>>n;
   cout<<fibonacci(n)<<endl;
 


}