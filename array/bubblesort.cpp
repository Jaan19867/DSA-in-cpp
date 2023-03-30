#include<iostream>
using namespace std;


void bubblesort(int arr[],int n){
    for( int j=1;j<n;j++){
for( int i=0; i<n-1;i++){

    if(arr[i]>arr[i+1]){ int temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;}
}



}

}




 int main(){
    int n;
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++){cin>>arr[i];}
    for( int i=0;i<n;i++){cout<<arr[i];}
    bubblesort( arr, n);
    cout<<endl;
for( int i=0;i<n;i++){cout<<arr[i];}

}