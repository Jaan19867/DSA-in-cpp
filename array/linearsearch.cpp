#include<iostream>
using namespace std;

int linearsearch( int b[],int n, int j){
int i=0; 
while(i<n){
    if(b[i]==j){ return i;}
    // else if(i==n){ return -1;}
    else{ i++;}

}
return -1;

    }



    







int main(){ int n;
cin>>n;
int b[n];
int j;
cin>>j;
for(int i=0;i<n;i++){ cin>>b[i];}
for(int i=0;i<n;i++){ cout<<b[i];}

cout<<endl;


cout<< linearsearch( b,n, j)<<endl;




}