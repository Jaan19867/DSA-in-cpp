#include<iostream>
using namespace std;
int main(){

    int a[100];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){   cin>> a[i];}
    for(int i=0; i<n; i++ ){ cout<<a[i] <<" ";}
    cout<<endl;

    int sum=0;
    for(int i=0;i<n;i++){sum= sum+a[i] ;
    }
    cout<<sum<<endl;




}

// for(int i=0; i<n; i++ ){ 
//     cout << a[i] << " ";
// }
