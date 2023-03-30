#include<iostream>
#include<cstring>
using namespace std;
class Student{
int age;
public:
char *name;
Student(int age,char *name){
this->age=age;
// this->name= name; this is on basis of shallow copy
this->name=new char[strlen(name)+1];
strcpy(this->name,name);


}
void display(){ cout<<this->name;}
Student(Student const &s){
    this->age=s.age;
    this->name=new char[strlen(name)+1];
    strcpy(this->name,s.name);


}


};


int main(){

char name[]="abcde";
Student s1(10,name);
s1.display();
cout<<endl;

name[2]='x';
Student s2(20,name);
s2.display();
cout<<endl;
s1.display();
cout<<endl;
Student s3(s1);
s3.name[0]='z';
s3.display();
cout<<endl;
s1.display();





}