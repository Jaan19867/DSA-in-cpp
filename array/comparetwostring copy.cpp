#include<iostream>
using namespace std;
#include<cstring>

int main(){char name1[100];
cin>>name1;
char name2[100];
cin>>name2;
cout<<endl;
strncpy(name1,name2,2);
cout<<name1<<" "<<name2;

}

