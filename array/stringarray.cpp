#include<iostream>
using namespace std;


int countlengthofstring( char name[]){ int count =0; 
for( int i=0;name[i]!='\0';i++){ count++;}
return count;
}
int main(){


// char name[10];
// cin>>name;
// cout<<name;
// cout<<endl;
// name[0]='a';
// name[8]='a';
// cout<<name;
// Write the code for counting the length of string 
char name[100];
cin>>name;
cout<<endl;
cout<<countlengthofstring( name);


}