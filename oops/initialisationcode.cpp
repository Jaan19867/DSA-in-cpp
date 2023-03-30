#include<iostream>
using namespace std;
class Student{
public:
int const age;
int const RollNo;
Student(int age,int RollNo):RollNo(RollNo),age(age){

};

void display(){
    cout<<"Tumhara Roll No chaap denge"<<this->RollNo<<" tumhara age bhi chhap denge   "<<this->age;
}


};


int main(){
    Student s1(30,987654);
    s1.display();





}