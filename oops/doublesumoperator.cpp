#include<iostream>
using namespace std;

class Fraction{
private:
int numerator;
int denominator;
public: 
Fraction( int numerator,int denominator){

    this->numerator=numerator;
    this->denominator=denominator;

}

 void print(){  cout<< this->numerator<<"/"<< this->denominator<<endl;}


Fraction& operator++(){
    numerator=numerator+denominator;
    simplify();
    return *this;
}
void simplify(){
    int gcd;
    int j=min(this->denominator,this->numerator);
    for(int i=1;i<=j;i++){  if((this->denominator%i==0)&&(this->numerator%i==0)){
gcd=i;}
    }
    this->numerator=this->numerator/gcd;
    this->denominator=this->denominator/gcd;

}

};
int main(){

Fraction f1(10,2);
f1.print();
// Fraction f2=++(f1);
// f2.print();
// below f1 is updated once not twice as f1jab upudate hua to uski copy bani fir us copy me update hua so we need to send the message by pass by reference
Fraction f3=++(++(f1));
f3.print();
f1.print();


}
