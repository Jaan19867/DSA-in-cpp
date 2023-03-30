#include<iostream>
using namespace std;
int sumofarr(int *arr,int n){

if(n==0){ return 0;}
int smallsumofarr=sumofarr(arr+1,n-1);
return arr[0]+smallsumofarr;

}


int main(){


    int n;
    cin>>n;
    int *arr= new int[n];
    for( int i=0;i<n;i++){cin>>arr[i];}

cout<<sumofarr(arr,n);


}