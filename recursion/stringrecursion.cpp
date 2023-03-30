#include<iostream>
using namespace std;


int stringlength(char *name,int n){
if(name[0]=='\0'){ return 0;}
int small=stringlength(name+1,n-1);
return small+1;





}
int main(){

int n;
cin>>n;

char *name= new char[n];
cin>>name;
cout<<endl;
cout<<name;
cout<<endl;
cout<<stringlength(name,n);

}