#include<iostream>
#include<cstring>
using namespace std;
class Student{
int Age;
char *Name;
public:
Student(int age,char *name){

    this->Age=age;
    this->Name= new char[strlen(name)+1];
   strcpy(this->Name,name);

}
void display(){

    cout<<this->Age<<" Ab tumhara naam print kar denge     "<<this->Name;
}




};

int main(){

char name[]="abcd";
Student s1(20,name);
s1.display();
cout<<endl;
name[3]='e';
Student s2(24,name);
s2.display();
cout<<endl;
s1.display();





}

