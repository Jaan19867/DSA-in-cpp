#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){return 1;}
   int  smalloutput=factorial(n-1);
   return smalloutput*n;

}



int main(){


    int n;
    cin>>n;
    int output=factorial(n);
    cout<<output<<endl;

}