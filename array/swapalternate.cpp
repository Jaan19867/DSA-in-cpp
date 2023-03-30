#include<iostream>
using namespace std;
void swapalternate(int b[], int n){

int i=0;int j=i+1;
    while(i<n &&  j <n)
{int temp=b[i];
b[i]=b[j];
b[j]=temp;
i=i+2; 
j=i+1;
cout<<i<<" "<<j<<endl;
} }





void printarray( int b[], int n){

    for(int i=0;i<n;i++){
        cout<<b[i]<<" " ; };
}


int main(){


    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++){ cin>>b[i];}
    for(int i=0;i<n;i++){ cout<<b[i];}
    cout<<endl;
    swapalternate( b,n);
    printarray( b,n);
}