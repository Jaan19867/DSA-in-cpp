#include<iostream>
using namespace std;


int lastindex(int *arr,int n,int x){
if(n==0){ return -1;}
int smallarr=lastindex(arr+1,n-1,x);
 if(arr[0]==x){ return 0;}
else if(smallarr==-1){ return smallarr;}
return smallarr+1;



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