#include<iostream>
using namespace std;

void lastindexhelper(int *arr,int n,int index,int x,int  &occ){
    if(n==0){ return ;}
    if(arr[index]==x){ occ=index;}
    lastindexhelper(arr,n-1,index+1,x,occ);


}

int lastindex(int *arr,int n,int x){


int occ=-1;
int index=0;
lastindexhelper(arr,n,index,x,occ);

return occ;
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