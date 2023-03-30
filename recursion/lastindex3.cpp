#include<iostream>
using namespace std;

int lastindex(int *arr,int n,int x){
    if(n==0){ return-1;}
    if(arr[n-1]==x){ return 0;}
    int smallarr=lastindex(arr)
}

int main(){
     int n,x;
    cin>>n;
    cin>>x;
    int *arr =new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<lastindex(arr,n,x);
}