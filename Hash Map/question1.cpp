#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;
vector<int> removeDuplicates(int *a,int size){


vector<int> output;
unordered_map<int,bool> seen;
for(int i=0;i<size;i++){

    if(seen.count(a[i])>0){ continue;}
    seen[a[i]]=true;
    output.push_back(a[i]);
    
}
return output;

}









int main(){
int a[]={1,2,2,2,2,3,3,4,4,5,4,6,7,5,4,3,5}
vector<int> output=removeDuplicates(a,17);



}