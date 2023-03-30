#include<iostream>
using namespace std;

void mergesort(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i=0; int j=0;
    for( int k=0;k<(m+n) ;k++){

        if(arr1[i]>arr2[j]){ arr3[k]= arr2[j];
        j++;}
        else{ arr3[k]=arr1[i];
        i++;}
    }
}



int main(){



    int arr1[]={1,3,5,7};int n=4;
    int arr2[]={2,4,6};int m=3;
    int arr3[n+m];

    mergesort( arr1,n, arr2,m, arr3);
    for( int k=0;k<(m+n);k++){
        cout<<arr3[k];
    }

    
}