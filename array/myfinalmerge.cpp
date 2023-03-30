#include<iostream>
using namespace std;




void mergesort( int arr1[] , int n, int arr2[], int m, int ans[ ] ){
int i=0;
int j=0;
int k=0;
while( i<n&&j<n){  if( arr1[i]>arr2[j]){ans[k]=arr2[j];
j++;}
else{ ans[k]=arr1[i];i++;}
k++;


while(i<n){ ans[k]=arr1[i];
i++; k++;}
while(j<m){ ans[k]=arr2[j]; j++; k++;}


}


   }

int main(){
int n; cin>>n;
int arr1[n];
   for( int i=0;i<n;i++){cin>>arr1[i];}
    for( int i=0;i<n;i++){cout<<arr1[i];}
    int m; cin>>m;
    int arr2[m];

   for( int i=0;i<m;i++){cin>>arr2[i];}
    for( int i=0;i<m;i++){cout<<arr2[i];}


    int ans[m+n];
    mergesort(arr1,n,arr2,m,ans);

    cout<<endl;
    for(int k=0;k<m+n;k++){

        cout<<ans[k];
    }
    }

