#include<iostream>
#include<climits>
using namespace std;

template<typename T>
class StackUsingArray{

T *data;
int nextIndex;
int capacity;
public:
StackUsingArray(int totalSize){data= new T[totalSize]; 

nextIndex=0;
capacity=totalSize;
 }
// return the number of element presents in mystack
int size(){ return nextIndex;}
bool isEmpty(){ if(nextIndex==0){ return true;}
else{ return false;}}
void push(int element){

if(nextIndex==capacity){cout<<" your stack is full";
return;}
data[nextIndex]=element;
nextIndex++;

}


// delete element
T pop(){ if(isEmpty()){ cout<<" stack is empy"<<endl;
return 0;}
nextIndex--;
return data[nextIndex];

}

T top(){ if(isEmpty()){             cout<<" stack is empty";
return 0;}
return data[nextIndex-1];}



};

int main(){

    StackUsingArray<int> s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(600);
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
}