#include<iostream>
using namespace std;

class Student{
int RollNumber;
int Age;
public:
Student(int RollNumber,int Age){
    cout<<" default constructor have been called"<<endl;
    this->RollNumber=RollNumber;
    this->Age=Age;
}
    
void display(){
    cout<<this->RollNumber<<" "<<this->Age;

}

~Student(){cout<<"Destructor hase been callled";}


};



int main(){
    // Student s1(10,10000);
    // Student s2(s1);
    // Student *s3=new Student(30,30000);
    // Student s4(*s3);
    // Student *s5=new Student(s4);
    // Student *s6= new Student(*s3);
    Student *s1=new Student(10,100);
    Student*s12=new Student(120,1200);
    s1->display();cout<<endl;
    (*s12).display();

cout<<endl;

    (*s12)=*s1;
    (*s12).display();
    delete s1,s12;









}