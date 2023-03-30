#include<iostream>
using namespace std;
int countthenumber(int n){
if(n==0){ return 0;}
int small=countthenumber(n/10);

int count=small+1;

return count;
}

int main(){


    int n;
    cin>>n;
    cout<<countthenumber(n);
}