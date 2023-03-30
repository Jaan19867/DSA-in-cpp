#include<iostream>
#include<vector>
using namespace std;

int main(){
// created statically
vector<int> v;
// created dynamically
vector<int> *vp=new vector<int>();

v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(40);

v[1]=100;

cout<<v[0]<<endl;
cout<<v[1]<<endl;
cout<<v[2]<<endl;
cout<<v[3]<<endl;
}