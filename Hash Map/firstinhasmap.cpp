#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;

int main(){

unordered_map<string,int>ourmap;
// insert
pair<string,int> p("abc",1);
ourmap.insert(p);
// another way to inset your key and int towards at that key
ourmap["def"]=2;
cout<<ourmap["abc"]<<"     "<<ourmap["def"];
cout<<endl;

// ourmap["gfg"]=3;

// cout<<ourmap.at["gfg"]<<" This is garbage value"<<endl;// this is incorrect
cout<<ourmap["gfg"]<<" This is garbage value"<<endl;
cout<<endl;
cout<<ourmap.size()<<endl;
cout<<ourmap["zyx"]<<endl;
cout<<ourmap.size()<<endl;
if( ourmap.count("zyx")>0){ cout<<" zyx is present here";}
else{ cout<<"zyx is absent;";}
ourmap.erase("gfg");
cout<<ourmap.size()<<endl;



}

    