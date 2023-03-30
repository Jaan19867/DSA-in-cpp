#include<iostream>
using namespace std;

void printArray( int input[], int n){

    cout<<" Function;"<<sizeof(input)<<endl;

    for(int i=0;i<n;i++){  
cout<<input[i]<<" ";


    }
    cout<<endl;
}






int main(){

int n;
cin>>n;
int input[100];
cout<<input<<endl;
for( int i=0;i<n;i++){ cin>>input[i];}
cout<<" Main : "<<sizeof(input)<<endl;
printArray( input, n);



}