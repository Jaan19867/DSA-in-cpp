#include<iostream>
using namespace std;

void selectionsort( int arr[], int n){

    int min; int minindex;
    
    for( int i=0;i<n-1;i++){
    int j; min=arr[i];
    for(j=i+1;j<n;j++){ if(min>arr[j]){ min=arr[j];
    minindex=j;}}

    // swap
    int temp= arr[i];
    arr[i]=arr[minindex];
    arr[minindex]= temp;}


}


int main(){



    int n;
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++){cin>>arr[i];}
    for( int i=0;i<n;i++){cout<<arr[i];}
    selectionsort( arr, n);
    cout<<endl;
for( int i=0;i<n;i++){cout<<arr[i];}
}