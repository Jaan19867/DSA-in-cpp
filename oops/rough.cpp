#include<iostream>
using namespace std;

class Student{ int rollNumber;
public:
int age;

Student(){
    cout<<" bhaiyo default constructor call ho gaya ";
}
Student(int age1,int rollnumber1){

    cout<<" ab hamara wala constructor call ho gaya";
    age=age1;
    rollNumber=rollnumber1;
    cout<<age<<" "<<rollNumber;

}
// void display(){ cout<<" "<<age<<" "<<rollNumber;}
// void setage(int age1,int password){
//     if(password==9891){
//     age=age1; }
//     else{ cout<<" you are fraud";}



// }


};




int main(){  
    Student *s1= new Student;
    Student *s2= new Student( 20,200);





    }






