#include<iostream>
using namespace std;
void printArray(int b[], int n){

    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}


 void reverse(int b[], int n  ){
    int i=0; int j=n-1;
    while(i<j){
        int temp=b[i];
        b[i]=b[j];
        b[j]=temp;
        i++;
        j--;
        
    }



 }

int main(){
    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

for(int i=0;i<n;i++){
    cout<<b[i]<<" ";
}
cout<<endl;
reverse(b,n);
printArray(b,n);
}