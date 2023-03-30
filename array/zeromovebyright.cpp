#include<iostream>
using namespace std;
void zeromove(
    int arr[],int n){
        int temp[n];int j=0;
        for( int i=0;i<n;i++){
            if( arr[i]!=0){ temp[j];j++;}
        }
        while(j<n){ temp[j]=0;j++;}

        for(int  i=0;i<n;i++){
            arr[i]=temp[j];

        }

}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++){
cin>>arr[i];
}
zeromove( arr, n);
for( int j=0; j<n;j++){
    cout<<arr[j];
}

}