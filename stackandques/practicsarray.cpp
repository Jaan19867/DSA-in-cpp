#include<iostream>
using namespace std;
int main(){



    int n;
    cin>>n;
    int b[100] ;
    for(int i=0;i<n;i++){
        cin>> b[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<b[i];
    }
int max=b[0];
for(int i=1;i<n;i++){
    if(max<=b[i]){ max=b[i];}
    cout<<max<<endl;
}
}