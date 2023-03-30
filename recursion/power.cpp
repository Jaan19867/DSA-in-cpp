#include<iostream>
using namespace std;


int power(int n, int m){

if(m==0){ return 1;}
int smalloutput= power(n,m-1);
return n*smalloutput;



}
int main(){


    int n,m;
    cin>>n>>m;
    cout<<power(n,m);
}