#include<iostream>
using namespace std;
bool checknumber(int *arr, int n,int x){


    if(n==0){ return false;}
    if(arr[0]==x){ return true;}
    bool smallarr=checknumber(arr+1,n-1,x);
return smallarr;
}

int main(){


    int n,x;
    cin>>n;
    cin>>x;
    int *arr =new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
cout<<checknumber(arr,n, x);




}