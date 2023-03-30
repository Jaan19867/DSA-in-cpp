#include<iostream>
using namespace std;

bool checksortedornot(int *arr,int n){
    if(n==0||n==1){ return true;}
    if(arr[0]>arr[1]){ return false;}
    bool smallersorted=checksortedornot(arr+1,n-1);
    
 return smallersorted;

}
int main(){
int n;
cin>>n;
int *arr= new int[n] ;
for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<checksortedornot(arr,n);



}