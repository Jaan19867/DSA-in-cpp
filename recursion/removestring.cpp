#include<iostream>
using namespace std;

void removex(char *name,int x){
    if(name[0]=='\0'){return;}
    if(name[0]!='x'){   removex(name+1,x)   ;}
else{  
int i=1;
for(;name[i]!='\0';i++){
name[i-1]=name[i]; 

}
name[i-1]='\0';


    removex(name,x);
    }


}


int main(){

int n;
cin>>n;
char x;
cin>>x;

char *name= new char[n];
cin>>name;
cout<<endl;

removex(name,x);
// cout<<name<<endl;
cout << "After removing " << x << ": " << name << endl;







}


